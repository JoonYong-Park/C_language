#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
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

	/// 배열에서 원하는 위치에 데이터 삽입 ///            중간고사 문제
	int i;
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
	}

	
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


































}