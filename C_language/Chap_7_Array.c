#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	/// �迭 ����� ///
	/*int arr[10];
	int c = 1;
	for (int i = 0; i < 10; i++) {
		arr[i] = 5;
		printf("%d ", c);
		c++;
	}*/

	/// 5���� ����� �й��� ������ �Է� �޾Ƽ�  �Ѳ����� ����Ѵ�,(�迭X) ///
	/*int n1, n2, n3;
	int s1, s2, s3;

	printf("�й� �Է�:");
	scanf_s("%d", &n1);
	printf("���� �Է�:");
	scanf_s("%d", &s1);

	printf("�й� �Է�:");
	scanf_s("%d", &n2);
	printf("���� �Է�:");
	scanf_s("%d", &s2);

	printf("�й� �Է�:");
	scanf_s("%d", &n3);
	printf("���� �Է�:");
	scanf_s("%d", &s3);

	printf("\n�й� ����\n====================\n");
	printf("�й�: %d, ����: %d\n", n1, s1);
	printf("�й�: %d, ����: %d\n", n2, s2);
	printf("�й�: %d, ����: %d\n", n3, s3);*/

	/// 5���� ����� �й��� ������ �Է� �޾Ƽ�  �Ѳ����� ����Ѵ�, ///
	/*int num[5];
	int score[5];

	for (int i = 0; i < 5; i++) {
		printf("�й� �Է�:");
		scanf_s("%d", &num[i]);
		printf("���� �Է�:");
		scanf_s("%d", &score[i]);
	}
	printf("�й� ����\n====================\n");

	for (int i = 0; i < 5; i++) {
		printf("�й�: %d, ����: %d\n", num[i], score[i]);

	}*/

	/// 10���� ������ �Է¹ް� 60�� �̻��� �л��� ����ΰ�? ///
	/*int num;
	int cnt = 0;

	for (int i = 0; i < 10; i++) {
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d", &num);

		if (num >= 60){
			cnt++;
		}

	}

	printf("%d ���̴�", cnt);*/

	/// ���� �Է�, �ִ� �ּ� ��� ///
	/*int num[] = {0};
	int cnt = 1;
	int hap = 0;
	int min = 101;
	int max = 0;

	while (1) {
		printf("������ �Է��Ͻÿ�: ");
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
	printf("\n���: %d\n", hap / cnt);
	printf("�ּҰ�: %d\n", min);
	printf("�ִ밪: %d\n", max);*/

	/*int k[9], e[9], m[9];
	int k_sum = 0, e_sum = 0, m_sum = 0;
	for (int i = 0; i < 9; i++) {
		printf("���� ���� �Է�:");
		scanf("%d", &k[i]);
		printf("���� ���� �Է�:");
		scanf("%d", &e[i]);
		printf("���� ���� �Է�:");
		scanf("%d", &m[i]);
	}
	for (int j = 0; j < 9; j++) {
		k_sum += k[j];
		e_sum += e[j];
		m_sum += m[j];
		
		printf("%2d�� �л�) ����:%2d, ����:%2d, ����%2d\n",j+1,k[j],e[j],m[j]);
	}
	printf("���� ���: %2d\n", k_sum / 9);
	printf("���� ���: %2d\n", e_sum / 9);
	printf("���� ���: %2d\n", m_sum / 9);

	return 0;*/

	/// �迭���� ������ �˻�
	/*int str[10] = { 12, 23,34,45,56,67,78,89,90,12 };
	int cnt = 1;
	int search;

	printf("�ƻ��ϰ� ���� �����͸� �Է��Ͻÿ�");
	scanf("%d", &search);

	for (int i = 0; i < 10; i++) {
		if (str[i] == search) {
			break;
		}
		else {
			cnt++;
		}
	}
	printf("%d��°�� �ִ�.", cnt);*/

	/// �迭���� ���ϴ� ��ġ�� ������ ���� ///            �߰���� ����
	int i;
	int num;
	int arr[5] = { 1, 2, 3 };
	for (int j = 0; j < 5; j++) {
		printf("%d ", arr[j]);
	}

	printf("\n�����ϰ� ���� ��ġ�� �Է��Ͻÿ�: ");
	scanf("%d", &num);

	for(i = 3; i >= num-1; i--) {
		arr[i+1] = arr[i];
	}
	arr[num] = 99;

	for(int j = 0; j < 5; j++) {
		printf("%d ", arr[j]);
	}

	
	/// �迭�� ��������   �߰���� ���� X
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