#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//////////// Creating a calendar for year 23 ////////////
int main_calender(void)
{
	printf("½");
	int yo = 1;     // 요일 위치값
	int month = 1;  //   월 출력값
	int i;          //   월 조정값

	for (i = 1; i < 14; i++) {
		printf("\n --------------------");
		printf("\n         %2d月", month);
		printf("\n 일 월 화 수 목 금 토 \n");
		
		// 요일 위치값
		for (int k = 1; k < yo%7; k++) {
			printf("   ");
		}

		// 2월
		if (i == 2) {
			for (int j = 1; j < 29; j++) {  // 2월은 28일까지
				printf("%3d", j);
				if (yo % 7 == 0) {
					printf("\n");
				}
				yo++;
			}
		}
		// 4,6,9,11월
		else if(i % 2 == 0){
			for (int j = 1; j < 31; j++) {  // 4,6,9,11월은 30일까지
				printf("%3d", j);
				if (yo % 7 == 0) {
					printf("\n");
				}
				yo++;
			}
		}
		// 1,3,5,7,8,10,12월
		else {
			for (int j = 1; j < 32; j++) {  // 1,3,5,7,8,10,12월은 31일까지
				printf("%3d", j);
				if (yo % 7 == 0) {
					printf("\n");
				}
				if(i == 7 && j == 31) {     // 7월 8월은 30일 31일 순환 규칙이 바뀌는 달
					i++;
				}
				yo++;
			}
		}
		month++;
	}
}