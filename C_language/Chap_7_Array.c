#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main_7() {

	/// 배열 만들기 ///
	/*int arr[10];
	int c = 1;
	for (int i = 0; i < 10; i++) {
		arr[i] = 5;
		printf("%d ", c);
		c++;
	}*/

	/// 5명의 사람의 학번과 점수를 입력 받아서  한꺼번에 출력한다,(배열X) ///
	/*int n1, n2, n3;
	int s1, s2, s3;

	printf("학번 입력:");
	scanf_s("%d", &n1);
	printf("점수 입력:");
	scanf_s("%d", &s1);

	printf("학번 입력:");
	scanf_s("%d", &n2);
	printf("점수 입력:");
	scanf_s("%d", &s2);

	printf("학번 입력:");
	scanf_s("%d", &n3);
	printf("점수 입력:");
	scanf_s("%d", &s3);

	printf("\n학번 점수\n====================\n");
	printf("학번: %d, 점수: %d\n", n1, s1);
	printf("학번: %d, 점수: %d\n", n2, s2);
	printf("학번: %d, 점수: %d\n", n3, s3);*/

	/// 5명의 사람의 학번과 점수를 입력 받아서  한꺼번에 출력한다, ///
	/*int num[5];
	int score[5];

	for (int i = 0; i < 5; i++) {
		printf("학번 입력:");
		scanf_s("%d", &num[i]);
		printf("점수 입력:");
		scanf_s("%d", &score[i]);
	}
	printf("학번 점수\n====================\n");

	for (int i = 0; i < 5; i++) {
		printf("학번: %d, 점수: %d\n", num[i], score[i]);

	}*/

	/// 10개의 점수를 입력받고 60점 이상인 학생은 몇명인가? ///
	/*int num;
	int cnt = 0;

	for (int i = 0; i < 10; i++) {
		printf("점수를 입력하시오: ");
		scanf_s("%d", &num);

		if (num >= 60){
			cnt++;
		}

	}

	printf("%d 명이다", cnt);*/

	/// 점수 입력, 최대 최소 평균 ///
	/*int num[] = {0};
	int cnt = 1;
	int hap = 0;
	int min = 101;
	int max = 0;

	while (1) {
		printf("점수를 입력하시오: ");
		scanf_s("%d", &num[cnt]);
		if(num[cnt] == 999) {
			break;
		}
		cnt++;
	}

	for(int i = 0; i < cnt; i++) {
		printf("%d ", num[i]);
		hap += num[i];
		if (num[i] < min) {
			min = num[i];
		}
		if (num[i] > max) {
			max = num[i];
		}
	}
	printf("\n평균: %d\n", hap / cnt);
	printf("최소값: %d\n", min);
	printf("최대값: %d\n", max);*/

	/*int k[9], e[9], m[9];
	int k_sum = 0, e_sum = 0, m_sum = 0;
	for (int i = 0; i < 9; i++) {
		printf("국어 점수 입력:");
		scanf("%d", &k[i]);
		printf("영어 점수 입력:");
		scanf("%d", &e[i]);
		printf("수학 점수 입력:");
		scanf("%d", &m[i]);
	}
	for (int j = 0; j < 9; j++) {
		k_sum += k[j];
		e_sum += e[j];
		m_sum += m[j];

		printf("%2d번 학생) 국어:%2d, 영어:%2d, 수학%2d\n",j+1,k[j],e[j],m[j]);
	}
	printf("국어 평균: %2d\n", k_sum / 9);
	printf("영어 평균: %2d\n", e_sum / 9);
	printf("수학 평균: %2d\n", m_sum / 9);

	return 0;*/

	/// 배열에서 데이터 검색
	/*int str[10] = { 12, 23,34,45,56,67,78,89,90,12 };
	int cnt = 1;
	int search;

	printf("걱색하고 싶은 데이터를 입력하시오");
	scanf("%d", &search);

	for (int i = 0; i < 10; i++) {
		if (str[i] == search) {
			break;
		}
		else {
			cnt++;
		}
	}
	printf("%d번째에 있다.", cnt);*/

	/// 배열에서 원하는 위치에 데이터 삽입 ///            @@@ 중간고사 문제
	/*int i;
	int num;
	int arr[5] = { 1, 2, 3 };
	for (int j = 0; j < 5; j++) {
		printf("%d ", arr[j]);
	}

	printf("\n삽입하고 싶은 위치를 입력하시오: ");
	scanf("%d", &num);

	for(i = 3; i >= num-1; i--) {
		arr[i+1] = arr[i];
	}
	arr[num] = 99;

	for(int j = 0; j < 5; j++) {
		printf("%d ", arr[j]);
	}*/


	/// 배열을 버블정렬   중간고사 문제 X
	/*int arr[5] = { 4 ,2 ,5 ,3 ,1 };
	int temp;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4-i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for(int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}*/

	/// 5명의 국,영,수 점수를 입력받아서 각 학생의 총점 평균, 각 과목의 총점과 평균 ///
	/*int kor[5], eng[5], math[5];
	int std_sum[5];
	int std_avg[5];
	int kor_sum = 0, eng_sum = 0, math_sum = 0;
	int kor_avg = 0, eng_avg = 0, math_avg = 0;

	for (int i = 0; i < 5; i++) {
		printf("국어, 영어, 수학 점수를 입력하시오: ");
		scanf("%d %d %d", &kor[i], &eng[i], &math[i]);

		std_sum[i] = kor[i] + eng[i] + math[i];
		std_avg[i] = std_sum[i] / 3;

		kor_sum += kor[i];
		eng_sum += eng[i];
		math_sum += math[i];

		kor_avg = kor_sum / 5;
		eng_avg = eng_sum / 5;
		math_avg = math_sum / 5;
	}

	for (int j = 0; j < 5; j++) {
		printf("%d번 학생: 총점 %d, 평균 %d\n", j, std_sum[j], std_avg[j]);
	}
	printf("국어 총점: %d, 평균: %d\n", kor_sum, math_avg);
	printf("영어 총점: %d, 평균: %d\n", eng_sum, eng_avg);
	printf("수학 총점: %d, 평균: %d\n", math_sum, math_avg);

	return 0;*/


	/// 2차원 배열 ///
	//int jumsu[5][4] = { 0 };
	//int math_sum = 0, eng_sum = 0, kor_sum = 0;
	//for(int i = 0; i < 5; i++) {   // 행
	//	for(int j = 0; j < 3; j++) {  // 열
	//		printf("학생 %d의 점수를 입력하시오: ", i+1);
	//		scanf("%d", &jumsu[i][j]);
	//		jumsu[i][3] += jumsu[i][j];
	//		
	//	}
	//}	
	//for (int i = 0; i < 5; i++) {
	//	printf("%d번 학생: 총점 %d, 평균 %d\n", i+1, jumsu[i][3], jumsu[i][3]/3);
	//}
	//for(int i = 0; i < 4; i++) {
	//	kor_sum += jumsu[i][0];
	//	eng_sum += jumsu[i][1];
	//	math_sum += jumsu[i][2];
	//}
	//printf("국어 총점: %d, 평균: %d\n", kor_sum, kor_sum/5);
	//printf("영어 총점: %d, 평균: %d\n", kor_sum, kor_sum/5);
	//printf("수학 총점: %d, 평균: %d\n", kor_sum, kor_sum/5);

	//return 0;

	////////////////// ## 숙제 로또 프로그램(사진) 

	/// 문자열 쓰래기값///
	//char str[5] = "joon";
	//printf("%s", str); 

	//char str2[10]; // 쓰래기값 -> 한자
	//str2[0] = 'j';
	//str2[1] = 'o';
	//str2[2] = 'o';
	//str2[3] = 'n';
	//str2[4] = '\0';
	//printf("\n%s", str2);

	/*char str3[] = { "바바" };
	printf("\n%s", str3);


	char str4[9] = { "박준용" };
	printf("\n%s", str4);

	char str5[10] = { "박준용" };
	printf("\n%s", str5);
	printf("\n%d ", strlen(str3));
	printf("%d ", strlen(str4));
	printf("%d ", strlen(str5));*/

	/// 배열을 하나 선언하고 문자열을 넣어놓고 시작 문자열의 길이가 몇글자인지 출력 ///
	/*char str[10] = ("test");
	int cnt = 0;
	int j = 0;
	int cnt2 = 0;


	for (int i = 0; i < 10; i++) {
		if (str[i] == '\0') {
			break;
		}
		else {
			cnt++;
		}
	}

	while (str[j] != '\0') {
		cnt2++;
		j++;
	}
	printf("%d\n", cnt);
	printf("%d", cnt2);*/

    ///////////////////////////////////////////////////////////////////////////////// 여기까지 함

	/// 문자열을 입력받아서 문자열의 길이를 출력 ///  문자열은 & 생략가능
	//int cnt = 0;
	//char str[5][10];
	//int j = 0;

	//for (int i = 0; i < 5; i++) {
	//	scanf("%s", &str[i],10);      // 최대 10글자의 문자열을 5번 입력 받는다.
	//	
	//
	//}
	//for (int i = 0; i < 5; i++) {
	//	
	//	printf("%s ", str[i]);
	//
	//}

	/*while (str[j] != '\0') {
		cnt++;
		j++;
	}
	printf("%d\n", cnt);*/


	//char str[] = { "abc" };
	//int sum = 0;
	///*for (int i = 0; i < 10; i++) {
	//	if (str[i] == '\0') {
	//		break;
	//	}
	//	else {
	//		sum = sum + 1;
	//	}
	//}*/
	//for (int i = 0; i < strlen(str); i++) {
	//	sum = sum + 1;
	//}
	//printf("%d", sum);


	/// 문자열이 같나 다른가 ///
	/*char str1[13] = "abc";
	char str2[13] = "abcd";

	if (strcmp(str1, str2) == 0) {
		printf("같다");
	}
	else {
		printf("다르다");
	}*/
	
	/// 문자열의 길이를 출력 ///
	/*int num1 = strlen(str1);
	int num2 = strlen(str2);*/

	/// 전화번호부 ///
	/*char name[5][10] = { "박준용", "장지용", "정호진", "김진희", "이은상" };
	char num[5][15] = { "010-1111-1111","010-2222-2222","010-3333-3333","010-4444-4444","010-5555-5555" };
	int choice = 0;
	char name2[10];

	while (1) {
		printf("====================================\n");
		printf("= 1.전체 출력   2.검색   3.종료    =\n");
		printf("====================================\n");
		printf("번호 입력:");
		scanf("%d", &choice);

		if (choice == 1) {
			for (int i = 0; i < 5; i++) {
				printf("%s: %s\n", name[i], num[i]);
			}
		}

		else if (choice == 2) {
			int i;
			printf("이름 입력:");
			scanf("%s", name2);


			for (i = 0; i < 5; i++) {
				if (strcmp(name[i], name2) == 0) {
					printf("%s: %s\n", name[i], num[i]);
				}
			}
			if (i == 5) {
				printf("없는 이름입니다.\n");
			}
		}


		else if (choice == 3) {
			return 0;
		}

		else {
			printf("잘못된 입력입니다.");
		}

		printf("====================================\n");


		return 0;
	}
	*/



}
