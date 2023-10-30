#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 6장 반복문
int main_6() {
	
	////// 6장 반복문 //////
	/// 반복문 밖 i는 몇일까? ///
	/*int i = 0;

	for (i = 0; i < 5; i++) {
		printf("재어변수 i = %d 입니다.\n", i);
	}
	printf("i = %d", i);*/

	/// 1~100 홀수 짝수 프린트 및 카운트 ///
	// 홀수
	//int n1 = 0, n2 = 0;

	//for (int i = 1; i < 101; i=i+2) {
	//	printf("|홀수 : %-3d", i);    // %-3d  왼쪽으로 붙여서 3칸
	//	n1++;
 //	}
	//printf("\n");

	//// 짝수
	//for (int i = 2; i < 101; i = i + 2) {
	//	printf("|짝수 : %-3d", i);    // %-3d  왼쪽으로 붙여서 3칸
	//	n2++;
	//}
	//printf("\n홀수 : %d \n짝수 : %d", n1, n2);

	/// 10월 달력 찍기 ///
	/*printf("         10월       \n");
	printf(" 일 월 화 수 목 금 토\n");
	for (int i = 1; i < 32; i++) {
		printf("%3d", i);
		if (i % 7 == 0) {
			printf("\n");
		}
	}
	printf("\n");*/
	//////////// 숙제 23년도 달력 찍기 ///////////////////

	/*for (int i = 1; i < 13; i++) {
		printf("\n       %2d월\n",i);
		printf(" 일 월 화 수 목 금 토\n");
		if (i == 2) {
			for (int j = 1; j < 28; j++) {
				printf("%3d", j);
				if (j % 7 == 0) {
					printf("\n");
				}
			}

		}
		else if(i % 2 == 0){

			for (int j = 1; j < 32; j++) {
				printf("%3d", j);
				if (j % 7 == 0) {
					printf("\n");
				}
			}
		}
		else {
			for (int j = 1; j < 32; j++) {
				printf("%3d", j);
				if (j % 7 == 0) {
					printf("\n");
				}
			}
		}
	}*/

	/// 10명의 학생의 국영수 점수의 총합, 평균을 계산하여 평균이 60점 이상인 학생은 몇명인가? ///
	/*int k, e, m;
	int mean;
	int cnt=0;
	
	for (int i = 0; i < 11; i++) {
		printf("국,영,수 점수를 입력하시오\n");
		scanf("%d %d %d", &k, &e, &m);
		mean = (k + e + m) / 3;
		if (mean > 60) {
			cnt++;
		}
	}
	printf("60점 이상의 학생은 %d명이다.", cnt);*/

	/// 임의의 수 1~9를 입력하고 구구단을 출력하시오 ///
	/*int n;
	printf("1~9 사이의 수를 입력하시오: ");
	scanf("%d", &n);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", n, i, n * i);
	}*/

	/// 임의의 두 수를 입력해서 두수 사이의 합을 구한다. ///
	/*int n1, n2;
	int hap = 0;

	printf("두 수를 입력하시오: ");
	scanf("%d %d", &n1, &n2);

	for (int i = n1+1; i < n2; i++) {
		hap = hap + i;
	}
	printf("%d부터 %d까지의 합은 %d이다.", n1+1, n2-1, hap);*/

	
	/// 숙제 3중 for문 구구단 ///
	/*for (int k = 0; k < 3; k++) {
		for (int i = 1; i < 10; i++) {
			for (int j = k*3+1; j < k*3+4; j++) {
				printf("%d * %d = %2d\t", j, i, j * i);
			}
			printf("\n");
		}
		printf("\n");
	} */


	/// 숙제 3중 for문 구구단 ///
	// 1~4
	// 1~5
	/*for (int k = 1; k < 3; k++) {
		for (int i = 1; i < 10; i++) {
			for (int j = k; j < k; j++) {
				printf("%d * %d = %2d\t", j, i, j * i);
			}
			printf("\n");
		}
		printf("\n");
	} */
	

	// p276 : 3 5 10번 문제들
	// 3번 //
	/*int hap = 0;

	for(int i = 1; i < 11; i++) {
		for (int j = 1; j < i+1; j++) {
			printf("%d ", j);
			if (j != 10)
				printf("+ ");
			hap += j;
		}
	}
	printf("\n합은 %d\n", hap);*/

	// 5번 //
	// 1 2 4 8 16 ~인 경우
	/*int hap = 1;

	for (int i = 1; i < 5 * 5 +1 ; i++) {
		printf("%8d ", hap);
		hap *= 2;
		if (i % 5 == 0)
			printf("\n");
	}
	printf("<최종: %d>\n", hap);*/

	// 10번 //
	/*printf("                   합계\n");
	printf("-----------------------\n");
	for (int i = 1; i < 8; i++) {
		int hap = 0;
		for (int j = 1; j < i+1; j++) {
			printf("%d ", j);
			hap += j;
		}
		for(int k = 10; k > i ; k--) {
			printf("  ");
		}

		printf("%d ", hap);
		printf("\n");
	}*/

	//////////// while문 ////////////
	/// 0~4까지 출력 ///
	/*int i;
	int loop = 0;
	i = 0;

	while (i < 5) {
		loop++;
		printf("재어변수 i = %d 입니다.\n", i);

		i++;
	}
	printf("반목문 밖 i = %d\n", i);*/

	/// 5번 입력을 받고 합을 구한다 ///
	/*int i = 1;
	int n;
	int cnt = 0;

	while (i < 6) {
		printf("숫자를 입력하시오");
		scanf_s("%d", &n);
		cnt += n;
		i++;
	}
	printf("합은 %d이다.", cnt);*/

	/// 무한 반복 하여 입력이 0이면 종료하고 합을 구한다 ///
	/*int i = 0;
	int n;

	int cnt = 0;
	while (1) {
		printf("숫자를 입력하시오: ");
		scanf_s("%d", &n);
		if(n == 0)
			break;

		cnt += n;
		i++;
	}
	printf("합은 %d이고 %d번 입력되었다.", cnt, i);	
	*/
	
	/// 무한 반복 하여 입력이 999이면 종료하고 합을 구한다 ///
	/*int i = 0;
	int n;
	int input;

	int cnt = 0;
	while (1) {
		printf("숫자를 입력하시오: ");
		scanf_s("%d", &n);
		if(n == 999)
			break;

		cnt += n;
		i++;
	}
	printf("합은 %d이고 평균은 %d입니다. \n%d번 입력되었다.", cnt, cnt/i, i);	*/

	/// 몇번 나왔나 check ///
	/*int n, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0;

	for (int i = 0; i < 5; i++) {
		printf("1~5사이의 숫자를 입력하시오: \n");
		scanf("%d", &n);
		if (n == 1) {
			n1++;
		}
		else if (n == 2) {
			n2++;
		}
		else if (n == 3) {
			n3++;
		}
		else if (n == 4) {
			n4++;
		}
		else if (n == 5) {
			n5++;
		}
	}
	printf("1: %d\n2: %d\n3: %d\n4: %d\n5: %d\n", n1, n2, n3, n4, n5);*/
	
	
	/// 배열 맛보기	///
	/*int n, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0;
	int c[5] = { 0 ,0,0,0,0 };

	for (int i = 1; i < 6; i++) {
		printf("1~5사이의 숫자를 n력하시오: \n");
		scanf("%d", &n);
		if (n == 1) {
			c[n] = c[i] + 1;
		}
		else if (n == 2) {
			c[n] = c[i] + 1;
		}
		else if (n == 3) {
			c[n] = c[i] + 1;
		}
		else if (n == 4) {
			c[n] = c[i] + 1;
		}
		else if (n == 5) {
			c[n] = c[i] + 1;
		}
	}

	for (int i = 1; i < 6; i++) {
		printf("%d번째 값은 %d\n", i, c[i]);
	
	}*/
	


	/// a~z까지 출력 여러방식으로 출력 ///

	/*/// 1번
	for (int i = 'a'; i < 'z' + 1; i++) {
		for (int j = 'a'; j < i + 1; j++) {
			printf("%c ", j);
		}
		printf("\n");
	}

	printf("\n");

	/// 2번
	for (int i = 'a'; i < 'z' + 1; i++) {
		for (int j = i; j < 'z' + 1; j++) {
			if (j == 'z')
				printf(". ");
			printf("%c ", j);
		}
		for (int j = 'a'; j < i; j++) {
			printf("%c ", j);
		}
		printf("\n");
	}

	printf("\n");

	/// 3번
	for (int i = 'a'; i < 'z' + 1; i++) {
		for (int j = i; j < 'z' + 1; j++) {
			printf("  ");
		}
		for (int j = 'a'; j < i + 1; j++) {
			printf("%c ", j);
		}
		printf("\n");
	}*/








}