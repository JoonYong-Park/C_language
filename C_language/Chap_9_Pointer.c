#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>       // < > 원래 있는헤더파일
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
	// 
	//int hap[5] = {0};

	for (int i = 0; i < 5; i++){
		for(int j = 0; j < 3; j++) {
			jum[i][3] += jum[i][j];
			jum[i][4] = jum[i][3] / 3;
		}
	}
}

int main(void) {
	
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
	//int a = 90;
	//int *p;
	//p = &a;
	//printf("변수 	 주소 	         값	      포인터\n");
	//printf("%c \t %04x \t %4d \t %4x \n", 'a', &a, *p, p); // a의 값, a의 주소, p의 값, p의 주소

	
	/// #헤더파일 만들어보기  ///
	/*printf("=====================================\n");
	call();
	printf("=====================================\n");*/

	/// 포인터 변수를 이용하여 ///
	//char* str;
	//str = "text";

	//while(*str != '\0') {
	//	printf("%c", *str);
	//	str++;                  // 주소값을 증가하면 옆 주소로 증가한다,
	//}


	///  %s는 한줄이다. ///
	//char ptr1[] = "text1";
	//char *ptr2 = "text2";

	//printf("ptr2 + 1의 값: %c \n",*(ptr2 + 1)); // 
	//printf("ptr2 + 1의 값: %c \n",(*ptr2 + 1)); // 
	//printf("문자열 ptr1의 값: %c \n", *ptr1);
	//printf("문자열 ptr2의 값: %s \n", ptr2);     // %s는 한줄을 출력한다   // %s에는 *를 붙이지 않는다.

	/// 
	/*char ptr1[10] = "joon";
	char *ptr2;

	ptr2 = "yong";

	printf("%s\n", ptr1);
	printf("%s\n", ptr2);*/

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
	printf("c[0]   : %c\n", c[0][3]);
	printf("a[2]   : %s\n", a[2]);
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
	}*/

	// c[0]: Korea
	// c[0] : e
	// a[2] : China
	// a[2][3] : n
	// Korea    Japn    China    America
	// Korea    Japn    China    America
	// Korea    Japn    China    America

	///  사용자 정의 함수를 사용해서 배열의 합 ///
	//int arr[5] = { 1,3,2,5,4 };
	////int* p = &arr[0];                   // 없어도됨
	//
	//int cnt = 0;
	////int* cntP = &cnt;

	//sum_4(arr, &cnt);
	////sum_4(arr, &cntP);
	//printf("합 : %d\n", cnt);

	/// 국,영,수 차원 배열 버전 ////
	/*int kor[5] = { 80, 90, 75, 72, 95 };
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

	}
	printf("-------------------\n");*/


	// 국,영,수 
	/*int kor[5] = { 80, 90, 75, 72, 95 };
	int eng[5] = { 90, 85, 80, 85, 100 };
	int math[5] = { 85, 95, 80, 75, 90 };
	int hap[5] = { 0 };*/

	int jum[5][5] = { {80, 90, 70, 0, 0},
					 {90, 80, 60, 0, 0},
					 {70, 80, 90, 0, 0},
					 {80, 90, 70, 0, 0},
					 {90, 80, 60, 0, 0 } };


	avg_2(jum);

	printf("-------------------\n");
	printf(" 국  영  수  총  평\n");
	printf("-------------------\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%3d %3d %3d %3d %3d\n", jum[i][0], jum[i][1], jum[i][2], jum[i][3], jum[i][3] / 3);

	}
	printf("-------------------\n");



	/// 철수의 암호와 주소 ///
	/*int 철수 = 10; // 암호 10

	printf("김철수 - 값: %d 주소: %d\n", 철수, &철수);
	//printf("값: %d 주소: %d\n", 준용, &준용);
	//printf("값: %d 주소: %d\n", 지용, &지용);

	// [미션맨]
	int * 미션맨;       // 포인터 변수
	미션맨 = &철수;	    // 철수의 주소를 미션맨에게 알려준다.
	printf("미션맨 - 값: %d 주소: %d\n", *미션맨, 미션맨);
	
	// 암호에 3곱하라
	*미션맨 = *미션맨 * 3;				 // 철수 = 철수 * 3;
	printf("미션맨 - 값: %d 주소: %d\n", 철수, &철수); 

	// [스파이]
	int * 스파이;
	스파이 = &철수;		// 철수의 주소를 스파이에게 알려준다.

	// 미션맨이 바꾼 암호에 2를 때라
	printf("<스파이 미션 수행중>\n");
	*스파이 = *스파이 - 2;				// 철수 = 철수 - 2;
	printf("스파이 - 값: %d 주소: %d\n", *스파이, 스파이);

	// 철수 원래 주소
	printf("김철수 - 값: %d 주소: %d\n", 철수, &철수);*/

	/// 배열 ///
	/*int arr[5] = {1,2,3,4,5};
	int * ptr = arr;		// 배열의 이름은 포인터 변수이다.
	for(int i = 0; i < 5; i++) {
		printf("%d \n", *(ptr + i));
	}
	printf("arr : %d\n", arr);
	printf("arr[0]의 주소: %d\n", &arr[0]);

	printf("arr 주소안에 값 : %d\n", *arr);
	printf("arr 주소의 값 : %d\n", arr);
	printf("arr 주소의 값 : %d\n", *&arr);*/

	/// 함수로 주소 넘기기 ///
	/* int* a = 10;
	int b = 20;
	printf("a: %d, b: %d\n", a, b);

	swap_2(&a, &b);  // 주소를 넘김
	printf("a: %d, b: %d\n", a, b);*/

	

}