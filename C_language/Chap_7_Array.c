#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main_7() {

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

	/// �迭���� ���ϴ� ��ġ�� ������ ���� ///            @@@ �߰���� ����
	/*int i;
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
	}*/


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

	/// 5���� ��,��,�� ������ �Է¹޾Ƽ� �� �л��� ���� ���, �� ������ ������ ��� ///
	/*int kor[5], eng[5], math[5];
	int std_sum[5];
	int std_avg[5];
	int kor_sum = 0, eng_sum = 0, math_sum = 0;
	int kor_avg = 0, eng_avg = 0, math_avg = 0;

	for (int i = 0; i < 5; i++) {
		printf("����, ����, ���� ������ �Է��Ͻÿ�: ");
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
		printf("%d�� �л�: ���� %d, ��� %d\n", j, std_sum[j], std_avg[j]);
	}
	printf("���� ����: %d, ���: %d\n", kor_sum, math_avg);
	printf("���� ����: %d, ���: %d\n", eng_sum, eng_avg);
	printf("���� ����: %d, ���: %d\n", math_sum, math_avg);

	return 0;*/


	/// 2���� �迭 ///
	//int jumsu[5][4] = { 0 };
	//int math_sum = 0, eng_sum = 0, kor_sum = 0;
	//for(int i = 0; i < 5; i++) {   // ��
	//	for(int j = 0; j < 3; j++) {  // ��
	//		printf("�л� %d�� ������ �Է��Ͻÿ�: ", i+1);
	//		scanf("%d", &jumsu[i][j]);
	//		jumsu[i][3] += jumsu[i][j];
	//		
	//	}
	//}	
	//for (int i = 0; i < 5; i++) {
	//	printf("%d�� �л�: ���� %d, ��� %d\n", i+1, jumsu[i][3], jumsu[i][3]/3);
	//}
	//for(int i = 0; i < 4; i++) {
	//	kor_sum += jumsu[i][0];
	//	eng_sum += jumsu[i][1];
	//	math_sum += jumsu[i][2];
	//}
	//printf("���� ����: %d, ���: %d\n", kor_sum, kor_sum/5);
	//printf("���� ����: %d, ���: %d\n", kor_sum, kor_sum/5);
	//printf("���� ����: %d, ���: %d\n", kor_sum, kor_sum/5);

	//return 0;

	////////////////// ## ���� �ζ� ���α׷�(����) 

	/// ���ڿ� �����Ⱚ///
	//char str[5] = "joon";
	//printf("%s", str); 

	//char str2[10]; // �����Ⱚ -> ����
	//str2[0] = 'j';
	//str2[1] = 'o';
	//str2[2] = 'o';
	//str2[3] = 'n';
	//str2[4] = '\0';
	//printf("\n%s", str2);

	/*char str3[] = { "�ٹ�" };
	printf("\n%s", str3);


	char str4[9] = { "���ؿ�" };
	printf("\n%s", str4);

	char str5[10] = { "���ؿ�" };
	printf("\n%s", str5);
	printf("\n%d ", strlen(str3));
	printf("%d ", strlen(str4));
	printf("%d ", strlen(str5));*/

	/// �迭�� �ϳ� �����ϰ� ���ڿ��� �־���� ���� ���ڿ��� ���̰� ��������� ��� ///
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

    ///////////////////////////////////////////////////////////////////////////////// ������� ��

	/// ���ڿ��� �Է¹޾Ƽ� ���ڿ��� ���̸� ��� ///  ���ڿ��� & ��������
	//int cnt = 0;
	//char str[5][10];
	//int j = 0;

	//for (int i = 0; i < 5; i++) {
	//	scanf("%s", &str[i],10);      // �ִ� 10������ ���ڿ��� 5�� �Է� �޴´�.
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


	/// ���ڿ��� ���� �ٸ��� ///
	/*char str1[13] = "abc";
	char str2[13] = "abcd";

	if (strcmp(str1, str2) == 0) {
		printf("����");
	}
	else {
		printf("�ٸ���");
	}*/
	
	/// ���ڿ��� ���̸� ��� ///
	/*int num1 = strlen(str1);
	int num2 = strlen(str2);*/

	/// ��ȭ��ȣ�� ///
	/*char name[5][10] = { "���ؿ�", "������", "��ȣ��", "������", "������" };
	char num[5][15] = { "010-1111-1111","010-2222-2222","010-3333-3333","010-4444-4444","010-5555-5555" };
	int choice = 0;
	char name2[10];

	while (1) {
		printf("====================================\n");
		printf("= 1.��ü ���   2.�˻�   3.����    =\n");
		printf("====================================\n");
		printf("��ȣ �Է�:");
		scanf("%d", &choice);

		if (choice == 1) {
			for (int i = 0; i < 5; i++) {
				printf("%s: %s\n", name[i], num[i]);
			}
		}

		else if (choice == 2) {
			int i;
			printf("�̸� �Է�:");
			scanf("%s", name2);


			for (i = 0; i < 5; i++) {
				if (strcmp(name[i], name2) == 0) {
					printf("%s: %s\n", name[i], num[i]);
				}
			}
			if (i == 5) {
				printf("���� �̸��Դϴ�.\n");
			}
		}


		else if (choice == 3) {
			return 0;
		}

		else {
			printf("�߸��� �Է��Դϴ�.");
		}

		printf("====================================\n");


		return 0;
	}
	*/



}
