#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//////////// Creating a calendar for year 23 ////////////
int main(void)
{	
	int yo = 1;     // ���� ��ġ��
	int month = 1;  //   �� ��°�
	int i;          //   �� ������

	for (i = 1; i < 14; i++) {
		printf("\n --------------------");
		printf("\n         %2d��", month);
		printf("\n �� �� ȭ �� �� �� �� \n");
		
		// ���� ��ġ��
		for (int k = 1; k < yo%7; k++) {
			printf("   ");
		}

		// 2��
		if (i == 2) {
			for (int j = 1; j < 29; j++) {  // 2���� 28�ϱ���
				printf("%3d", j);
				if (yo % 7 == 0) {
					printf("\n");
				}
				yo++;
			}
		}
		// 4,6,9,11��
		else if(i % 2 == 0){
			for (int j = 1; j < 31; j++) {  // 4,6,9,11���� 30�ϱ���
				printf("%3d", j);
				if (yo % 7 == 0) {
					printf("\n");
				}
				yo++;
			}
		}
		// 1,3,5,7,8,10,12��
		else {
			for (int j = 1; j < 32; j++) {  // 1,3,5,7,8,10,12���� 31�ϱ���
				printf("%3d", j);
				if (yo % 7 == 0) {
					printf("\n");
				}
				if(i == 7 && j == 31) {     // 7�� 8���� 30�� 31�� ��ȯ ��Ģ�� �ٲ�� ��
					i++;
				}
				yo++;
			}
		}
		month++;
	}
}