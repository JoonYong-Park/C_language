#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main_making1() {
	int StudentChoice[10][3] = {{ 1, 2, 3 },
							    { 2, 1, 3 },
							    { 3, 2, 1 },
							    { 1, 2, 1 },
							    { 1, 2, 1 },
							    { 1, 3, 1 },
							    { 1, 2, 3 },
							    { 2, 1, 3 },
							    { 3, 2, 1 },
							    { 2, 3, 1 }};
	int rightChoice[3] = { 1, 2, 3 };
	int total = 0;

	for (int i = 0; i < 10; i++) {
		int cnt = 0;
		for (int j = 0; j < 3; j++) {
			if (StudentChoice[i][j] == rightChoice[j]) {
				cnt++;
			}
		}
		total += cnt;
		printf("%2d�� �л��� ������ %d�� �Դϴ�.\n", i + 1, cnt);
	}
	printf("����: %d��\n���: %.2f", total,total/10.0);



}