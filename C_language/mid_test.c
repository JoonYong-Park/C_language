#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_mid_test(void) {
	int hak[13] = { 2101560, 2002250, 2204650, 2110940, 2308550, 2230790, 2001500, 2303790, 2240450, 2312660, 2010477, 1903350, 2250280 };
	int hap[5] = { 0 }; // (19, 20, 21, 22, 23)학번 점수 합계
	int hak_23 = 0;		// 23학번 인원수
	int hak_22 = 0;		// 22학번 인원수
	int hak_21 = 0;		// 21학번 인원수
	int hak_20 = 0;		// 20학번 인원수
	int hak_19 = 0;		// 19학번 인원수

	for (int i = 0; i < 13; i++) {
		if (hak[i] >= 2300000) {
			hak_23++;
			hap[4] += hak[i] % 1000;
		}
		else if (hak[i] >= 2200000) {
			hak_22++;
			hap[3] += hak[i] % 1000;
		}
		else if (hak[i] >= 2100000) {
			hak_21++;
			hap[2] += hak[i] % 1000;
		}
		else if (hak[i] >= 2000000) {
			hak_20++;
			hap[1] += hak[i] % 1000;
		}
		else if (hak[i] >= 1900000) {
			hak_19++;
			hap[0] += hak[i] % 1000;
		}
		else {
			printf("18학번 이하가 존재합니다.\n");
		}
	}


	if (hak_19 != 0)
	{
		printf("  %d || ", 19);
		for (int i = 0; i < hak_19; i++) {
			printf("%c", '*');
		}
		for (int j = hak_19; j < 20; j++) {
			printf(" ");
		}
		printf("%d\n", hap[0] / hak_19);
	}
	printf("  %d || ", 20);
	for (int i = 0; i < hak_20; i++) {
		printf("%c", '*');
	}
	for (int j = hak_20; j < 20; j++) {
		printf(" ");
	}
	printf("%d\n", hap[1] / hak_20);

	printf("  %d || ", 21);
	for (int i = 0; i < hak_21; i++) {
		printf("%c", '*');
	}
	for (int j = hak_21; j < 20; j++) {
		printf(" ");
	}
	printf("%d\n", hap[2] / hak_21);

	printf("  %d || ", 22);
	for (int i = 0; i < hak_22; i++) {
		printf("%c", '*');
	}
	for (int j = hak_22; j < 20; j++) {
		printf(" ");
	}
	printf("%d\n", hap[3] / hak_22);

	printf("  %d || ", 23);
	for (int i = 0; i < hak_23; i++) {
		printf("%c", '*');
	}
	for (int j = hak_23; j < 20; j++) {
		printf(" ");
	}
	printf("%d\n", hap[4] / hak_23);

	printf("=================================\n");
	printf("학번 || 인원수            평균점수");

}