#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 6�� �ݺ���
int main_6() {
	
	////// 6�� �ݺ��� //////
	/// �ݺ��� �� i�� ���ϱ�? ///
	/*int i = 0;

	for (i = 0; i < 5; i++) {
		printf("���� i = %d �Դϴ�.\n", i);
	}
	printf("i = %d", i);*/

	/// 1~100 Ȧ�� ¦�� ����Ʈ �� ī��Ʈ ///
	// Ȧ��
	//int n1 = 0, n2 = 0;

	//for (int i = 1; i < 101; i=i+2) {
	//	printf("|Ȧ�� : %-3d", i);    // %-3d  �������� �ٿ��� 3ĭ
	//	n1++;
 //	}
	//printf("\n");

	//// ¦��
	//for (int i = 2; i < 101; i = i + 2) {
	//	printf("|¦�� : %-3d", i);    // %-3d  �������� �ٿ��� 3ĭ
	//	n2++;
	//}
	//printf("\nȦ�� : %d \n¦�� : %d", n1, n2);

	/// 10�� �޷� ��� ///
	/*printf("         10��       \n");
	printf(" �� �� ȭ �� �� �� ��\n");
	for (int i = 1; i < 32; i++) {
		printf("%3d", i);
		if (i % 7 == 0) {
			printf("\n");
		}
	}
	printf("\n");*/
	//////////// ���� 23�⵵ �޷� ��� ///////////////////

	/*for (int i = 1; i < 13; i++) {
		printf("\n       %2d��\n",i);
		printf(" �� �� ȭ �� �� �� ��\n");
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

	/// 10���� �л��� ������ ������ ����, ����� ����Ͽ� ����� 60�� �̻��� �л��� ����ΰ�? ///
	/*int k, e, m;
	int mean;
	int cnt=0;
	
	for (int i = 0; i < 11; i++) {
		printf("��,��,�� ������ �Է��Ͻÿ�\n");
		scanf("%d %d %d", &k, &e, &m);
		mean = (k + e + m) / 3;
		if (mean > 60) {
			cnt++;
		}
	}
	printf("60�� �̻��� �л��� %d���̴�.", cnt);*/

	/// ������ �� 1~9�� �Է��ϰ� �������� ����Ͻÿ� ///
	/*int n;
	printf("1~9 ������ ���� �Է��Ͻÿ�: ");
	scanf("%d", &n);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", n, i, n * i);
	}*/

	/// ������ �� ���� �Է��ؼ� �μ� ������ ���� ���Ѵ�. ///
	/*int n1, n2;
	int hap = 0;

	printf("�� ���� �Է��Ͻÿ�: ");
	scanf("%d %d", &n1, &n2);

	for (int i = n1+1; i < n2; i++) {
		hap = hap + i;
	}
	printf("%d���� %d������ ���� %d�̴�.", n1+1, n2-1, hap);*/


	/*for(int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			for (int k = 1; k < 3; k++) {
				printf("%d * %d = %2d\t", j, i, j * i);
			}
				printf("\n");
		}
		printf("\n");
	}*/
	
	/// ���� 3�� for�� ������ ///
	/*for (int k = 0; k < 3; k++) {
		for (int i = 1; i < 10; i++) {
			for (int j = k*3+1; j < k*3+4; j++) {
				printf("%d * %d = %2d\t", j, i, j * i);
			}
			printf("\n");
		}
		printf("\n");

	}*/

	// 276 : 3 5 10
	
	// 3�� //
	/*int hap = 0;

	for(int i = 1; i < 11; i++) {
		for (int j = 1; j < i+1; j++) {
			printf("%d ", j);
			if (j != 10)
				printf("+ ");
			hap += j;
		}
	}
	printf("\n���� %d\n", hap);*/

	// 5�� //
	// 1 2 4 8 16 ~�� ���
	/*int hap = 1;

	for (int i = 1; i < 5 * 5 +1 ; i++) {
		printf("%8d ", hap);
		hap *= 2;
		if (i % 5 == 0)
			printf("\n");
	}
	printf("<����: %d>\n", hap);*/

	// 10�� //
	printf("                   �հ�\n");
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
	}


}