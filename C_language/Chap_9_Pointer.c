#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>       // < > 원래 있는헤더파일
#include <stdlib.h>      
#include <string.h>
#include "test_header.h" // " " 내가 만든 헤더파일


void swap_2(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("a: %d, b: %d\n", *a, *b);
}

void sum_4(int *p, int *cntP) {
	for (int i = 0; i < 5; i++) {
		*cntP += p[i];
		printf("%d ", p[i]);
	}
}

void avg(int* kor, int* eng, int* math, int * hap) {
	//int hap[5] = {0};

	for (int i = 0; i < 5; i++)
	{
		//printf("국 영 수 총 평\n");
		hap[i] = kor[i] + eng[i] + math[i];
		//printf("%d %d %d %d %d\n", kor[i], eng[i],math[i], hap[i], hap[i]/3);
	}
}

//void avg_2(int *jum[5]) {    // 포인터 배열: 포인터(주소값)가 5개 있다
void avg_2(int (*jum)[5]) {    // 배열의 포인터: 배열을 가르키는 포인터
	for (int i = 0; i < 5; i++){
		for(int j = 0; j < 3; j++) {
			jum[i][3] += jum[i][j];
		}
			jum[i][4] = jum[i][3] / 3;
	}
}





/// 영어 단어장 만들기 함수 버전 ///
void print_1(char (*eng)[10][20], char(*kor)[10][20]) {
//void print_1(char eng[10][20], char kor[10][20]) {
	for (int i = 0; i < eng[i][0] != '\0'; i++) {
		printf("%11s : %4s\n", eng[i], kor[i]);
	}
}

void search(char(*input_eng)[20], char(*eng)[10][20], char(*kor)[10][20]) {
//void search(char input_eng[20], char eng[10][20], char kor[10][20]) {
	printf("찾고싶은 단어를 입력하시오:");
	scanf("%s", input_eng);

	for (int i = 0; i < 10; i++) {
		if (strcmp(input_eng, eng[i]) == 0) {

			printf("%s : %s\n", eng[i], kor[i]);
		}
		else {
			printf("%2d번 - 단어장에 없습니다.\n", i+1);
		}
	}
}

void edit(char (*input_eng)[10][20], char(*kor)[20], char(*input_kor)[10][20], char(*eng)[20]) {
//void edit(char eng[10][20], char input_eng[20],  char kor[10][20], char input_kor[20]) {
	printf("수정하고싶은 단어를 입력하시오:");
	scanf("%s", input_eng);

	for (int i = 0; i < 10; i++) {
		if (strcmp(input_eng, eng[i]) == 0) {

			printf("수정할 단어를 입력하시오:");
			scanf("%s", input_eng);

			printf("수정할 단어의 뜻을 입력하시오: ");
			scanf("%s", input_kor);
			
			strcpy(eng[i], input_eng);
			strcpy(kor[i], input_kor);
		}
		else {
			printf("%2d번 - 단어장에 없습니다.\n", i+1);	
		}
	}
}

void dekete(char (*input_eng), char (*eng), char (*kor)) {
//void delete(char input_eng[20], char eng[10][20],  char kor[10][20]) {
	printf("삭제하고싶은 단어를 입력하시오:");
	scanf("%s", input_eng);
	for (int i = 0; i < 10; i++) {
		if (strcmp(input_eng, eng[i]) == 0) {

			for (int j = i; j < 9; j++) {
				strcpy(eng[j], eng[j + 1]);
				strcpy(kor[j], kor[j + 1]);
			}
		}
	}
}






int main_9(void) {
	
	/// 포인터 변수 ///
	/*long a = 4;  // 변수 선언
	long* p;     // 포인터 변수 선언
	p = &a;     // 포인터 변수에 주소값 저장
	//p = 443;    // 포인터 변수에 값 저장

	printf("a의 값: %u\n", a);             // 4
	printf("a의 주소: %u\n", &a);          // 420
	printf("p의 값: %u\n", p);             // 420
	printf("p의 주소: %u\n", &p);          // 456
	printf("p가 가리키는 값: %u\n", *p);   // 4
	*/

	/// 포인터 변수 ///
	/*int a = 90;
	int *p;
	p = &a;

	printf("변수 	 주소 	         값	      포인터\n");
	printf("%c \t %04x \t %4d \t %4x \n", 'a', &a, *p, p); // a의 값, a의 주소, p의 값, p의 주소
	*/
	
	/// #헤더파일 만들어보기  ///
	/*printf("=====================================\n");
	call();
	printf("=====================================\n");*/

	/// 포인터 변수를 이용하여 ///
	/*char* str;
	str = "text";

	while(*str != '\0') {
		printf("%c", *str);
		str++;                  // 주소값을 증가하면 옆 주소로 증가한다,
	}
	*/

	///  %s는 한줄이다. ///            기말고사
	/*char ptr1[] = "apple1";
	char *ptr2  = "apple2";

	printf("ptr2 + 1의 값: %c \n",*ptr2);		 // 자리 값
	printf("ptr2 + 1의 값: %c \n",*(ptr2 + 1));  // 함칸뒤 값
	printf("ptr2 + 1의 값: %c \n",(*ptr2 + 1));  // 자리 값의 + 1
	printf("문자열 ptr1의 주소값: %d \n", ptr1);
	printf("문자열 ptr1의 값: %c \n", *ptr1);
	printf("문자열 ptr2의 값: %s \n", ptr2);     // %s는 한줄을 출력한다   // %s에는 *를 붙이지 않는다.*/

	/// 문자열 출력 ///
	/*char ptr1[10] = "joon";
	char *ptr2;

	ptr2 = "yong";

	printf("%s\n", ptr1);
	printf("%s\n", ptr2);*/

	/// 포인터 변수 이해하기 ///
	/*int a = 1;
	int* p;
	p = &a;
	printf("%d\n", *p);
	*p = 2;
	printf("%d\n", *p);
	printf("%d\n", p);
	printf("%d\n", a);
	*/

	/// 포인터 변수 이해하기 ///
	/*char f[10] = "Korea";
	char* b;
	b = &f[2];
	printf("%s", b);*/

	/// 포인터 이해하기 ///      
	/*

	// 문자열 선언 후 대입
	char f[10] = "Korea";
	char* p;
	p = f;
	printf("%c \n", *p); // 값
	p++;
	printf("%c \n", *p); // 값
	//printf("%d \n",  p); // 주소
	//printf("%d \n",  f); // 주소

	printf("\n");      // -------------------------------------- //

	// 문자열 바로 대입
	p = "abcd";
	//printf("%s \n", p); // 값    
	printf("%c \n", *p); // 값
	p++;
	printf("%c \n", *p); // 값
	//printf("%d \n",  p); // 주소
	*/

	//////////////////////////////////////////////////////////////////////////////////////////

	/// 2차원 배열 print 타잎	///
	/*char c[4][10] = {"Korea",
					"Japn", 
					"China", 
					"America"};
	char *a[] = {"Korea", 
				"Japn", 
				"China", 
				"America" };

	printf("c[0]   : %s\n", c[0]);    // 한줄이면 s
	printf("c[0][3]: %c\n", c[0][3]); // 한글자면 c
	printf("c[1]   : %s\n", c[1]);    // 한줄이면 s
	printf("c[1][3]: %c\n", c[1][3]); // 한글자면 c

	printf("\na[2]   : %s\n", a[2]);
	printf("a[2][3]: %c\n", a[2][3]);
	for (int i = 0; i < 4; i++) {
		printf("%s    ", c[i]);
	}
	printf("\n");
	for (int i = 0; i < 4; i++) {
		printf("%s    ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 4; i++) {
		printf("%s    ", *(a+i));
	}
	*/
	 

	///  사용자 정의 함수를 사용해서 배열의 합 ///
	/*int arr[5] = {1,3,2,5,4};
	//int* p = &arr[0];                   // 없어도됨
	
	int cnt = 0;
	//int* cntP = &cnt;

	sum_4(arr, &cnt);
	//sum_4(arr, &cntP);
	printf("합 : %d\n", cnt);
	*/

	/// 국,영,수 1차원 배열 ////
	/*int kor[5] = {80, 90, 75, 72, 95};
	int eng[5] = { 90, 85, 80, 85, 100 };
	int math[5] = { 85, 95, 80, 75, 90 };
	int hap[5] = { 0 };

	avg(kor, eng, math, hap);

	printf("-------------------\n");
	printf(" 국  영  수  총  평\n");
	printf("-------------------\n");
	for (int i = 0; i < 5; i++)
	{
		hap[i] = kor[i] + eng[i] + math[i];
		printf("%3d %3d %3d %3d %3d\n", kor[i], eng[i], math[i], hap[i], hap[i] / 3);

	
	printf("-------------------\n");
	*/

	/// 국,영,수 2차원 배열 버전 ////
	/*int jum[5][5] = {{80, 90, 70, 0, 0},
					  {90, 80, 60, 0, 0},
					  {70, 80, 90, 0, 0},
					  {80, 90, 70, 0, 0},
					  {90, 80, 60, 0, 0} };

	avg_2(jum);

	printf("-------------------\n");
	printf(" 국  영  수  총  평\n");
	printf("-------------------\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%3d %3d %3d %3d %3d\n", jum[i][0], jum[i][1], jum[i][2], jum[i][3], jum[i][3] / 3);

	}
	printf("-------------------\n");*/

	/// 영어 단어장 만들기 main 버전 ///
	/*char eng[10][20] = {"apple", "banana", "orange", "grape", "strawberry"};
	char kor[10][20] = {"사과", "바나나", "오렌지", "포도", "딸기"};
	char input_eng[20];
	char input_kor[20];
	int cho;

	while (1) {
		printf("----------------------------------------------------------\n");
		printf("[1. 출력, 2. 검색, 3. 수정, 4.삭제, 5.화면 지우기, 6.종료 ]\n입력:");
		scanf("%d", &cho);
		switch (cho)
		{
			case 1:
				for (int i = 0; i < strlen(eng); i++) {
					printf("%s\n", eng[i]);
				}
				break;
			case 2:
				printf("찾고싶은 단어를 입력하시오:");
				scanf("%s", input_eng);
				for (int i = 0; i < 10; i++) {
					if (strcmp(input_eng, eng[i]) == 0) {
						printf("%s", eng[i]);
						printf("%s\n", kor[i]);
					}
				}
				break;
			case 3:
				printf("수정하고싶은 단어를 입력하시오:");
				scanf("%s", input_eng);
				for (int i = 0; i < 10; i++) {
					if (strcmp(input_eng, eng[i]) == 0) {
						
						printf("수정 단어를 입력하시오:");
						scanf("%s", input_eng);
						
						printf("수정 단어의 뜻을 입력하시오: ");
						scanf("%s", input_kor);
						
						strcpy(eng[i], input_eng);
						strcpy(kor[i], input_kor);
					}
				}
				break;
			case 4:
				printf("삭제하고싶은 단어를 입력하시오:");
				scanf("%s", input_eng);
				for (int i = 0; i < 10; i++) {
					if (strcmp(input_eng, eng[i]) == 0) {

						for(int j = i; j < 9; j++) {
							strcpy(eng[j], eng[j + 1]);
							strcpy(kor[j], kor[j + 1]);
						}
					}
				}
				break;
			case 5:
				system("cls");
				break;
			case 6:
				return 0;
			default:
				printf("입력값이 잘못됭었습니다.\n");
			break;
		}
	}*/
	
	/// 영어 단어장 만들기 함수 버전 ///
	/*char eng[10][20] = {"apple", "banana", "orange", "grape", "strawberry", "a"};
	char kor[10][20] = { "사과", "바나나", "오렌지", "포도", "딸기", "에이"};
	char input_eng[20];
	char input_kor[20];
	
	int cho;

	while (1) {
		printf("----------------------------------------------------------\n");
		printf("[1. 출력, 2. 검색, 3. 수정, 4.삭제, 5.화면 지우기, 6.종료]\n입력:");
		scanf("%d", &cho);

		switch (cho)
		{
		case 1:
			print_1(eng, kor);
			break;
		case 2:
			search(input_eng, eng, kor);
			break;
		case 3:
			edit(eng, input_eng, kor, input_kor );
			break;
		case 4:
			delete(eng, input_eng, kor);
			break;
		case 5:
			system("cls");
			break;
		case 6:
			return 0;
		default:
			printf("입력값이 잘못됭었습니다.\n");
			break;
		}
	}
	*/



	////////////////////// 고급 포인터(동적 메모리 확보) //////////////////////	
	// 포인터 변수로 문자열 선언하고 scanf로 입력 받았을때 malloc으로 메모리 확보 해야한다.

	char* p;
	//scanf("%s", p);
	p = (char*)malloc(12); // 12바이트 메모리 확보
	scanf("%s", p);
	printf("입력된 문자열:  % s", p);
	free(p);


	///////////////////// 구조체 ////////////////////////////

















	/// 철수의 암호와 주소 ///
	/*// [변수]
	int 철수 = 10; // 암호 10

	printf("김철수 - 값: %d 주소: %d\n", 철수, &철수);
	//printf("값: %d 주소: %d\n", 준용, &준용);
	//printf("값: %d 주소: %d\n", 지용, &지용);

	// [포인터]
	int * 포인터;       // 포인터 변수
	포인터 = &철수;	    // 철수의 주소를 미션맨에게 알려준다.
	printf("포인터 - 값: %d 주소: %d\n", *포인터, 포인터);
	
	// 암호에 3곱하라
	*포인터 = *포인터 * 3;				 // 철수 = 철수 * 3;
	printf("미션맨 - 값: %d 주소: %d\n", 철수, &철수); 

	// [스파이]
	printf("<스파이 미션 수행중>\n");
	int * 스파이;
	스파이 = &철수;		// 철수의 주소를 스파이에게 알려준다.

	// 미션맨이 바꾼 암호에 2를 때라
	*스파이 = *스파이 - 2;				// 철수 = 철수 - 2;
	printf("스파이 - 값: %d 주소: %d\n", *스파이, 스파이);

	// 철수 원래 주소
	printf("김철수 - 값: %d 주소: %d\n", 철수, &철수);
	*/

	/// 배열 ///
	/*int arr[5] = {1,2,3,4,5};
	int * ptr = arr;				 // 배열의 이름은 포인터 변수이다.
	for(int i = 0; i < 5; i++) {
		printf("%d \n", *(ptr + i)); // arr[i] == *(ptr + i)
	}
	printf("arr           : %d\n", arr);
	printf("arr[0]의 주소 : %d\n", &arr[0]);

	printf("arr 주소안에 값 : %d\n", *arr);
	printf("arr 주소의 값 : %d\n", arr);
	printf("arr 주소의 값 : %d\n", *&arr);  // arr[0]의 값의 주소
	*/

	/// 함수로 주소 넘기기 ///
	/*int a = 10;
	int b = 20;
	printf("a: %d, b: %d\n", a, b);

	swap_2(&a, &b);  // 주소를 넘김
	printf("a: %d, b: %d\n", a, b);
	*/
	
}