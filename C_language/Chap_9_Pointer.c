#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>       // < > ���� �ִ��������
#include <stdlib.h>      
#include <string.h>
#include "test_header.h" // " " ���� ���� �������


void swap_2(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("a: %d, b: %d\n", *a, *b);
}

void sum_4(int *p, int *cntP) {
	for (int i = 0; i < 5; i++) {
		*cntP += p[i];
		printf("%d ", p[i]);
	}
}

void avg(int* kor, int* eng, int* math, int * hap) {
	//int hap[5] = {0};

	for (int i = 0; i < 5; i++)
	{
		//printf("�� �� �� �� ��\n");
		hap[i] = kor[i] + eng[i] + math[i];
		//printf("%d %d %d %d %d\n", kor[i], eng[i],math[i], hap[i], hap[i]/3);
	}
}

//void avg_2(int *jum[5]) {    // ������ �迭: ������(�ּҰ�)�� 5�� �ִ�
void avg_2(int (*jum)[5]) {    // �迭�� ������: �迭�� ����Ű�� ������
	for (int i = 0; i < 5; i++){
		for(int j = 0; j < 3; j++) {
			jum[i][3] += jum[i][j];
		}
			jum[i][4] = jum[i][3] / 3;
	}
}





/// ���� �ܾ��� ����� �Լ� ���� ///
void print_1(char (*eng)[10][20], char(*kor)[10][20]) {
//void print_1(char eng[10][20], char kor[10][20]) {
	for (int i = 0; i < eng[i][0] != '\0'; i++) {
		printf("%11s : %4s\n", eng[i], kor[i]);
	}
}

void search(char(*input_eng)[20], char(*eng)[10][20], char(*kor)[10][20]) {
//void search(char input_eng[20], char eng[10][20], char kor[10][20]) {
	printf("ã����� �ܾ �Է��Ͻÿ�:");
	scanf("%s", input_eng);

	for (int i = 0; i < 10; i++) {
		if (strcmp(input_eng, eng[i]) == 0) {

			printf("%s : %s\n", eng[i], kor[i]);
		}
		else {
			printf("%2d�� - �ܾ��忡 �����ϴ�.\n", i+1);
		}
	}
}

void edit(char (*input_eng)[10][20], char(*kor)[20], char(*input_kor)[10][20], char(*eng)[20]) {
//void edit(char eng[10][20], char input_eng[20],  char kor[10][20], char input_kor[20]) {
	printf("�����ϰ���� �ܾ �Է��Ͻÿ�:");
	scanf("%s", input_eng);

	for (int i = 0; i < 10; i++) {
		if (strcmp(input_eng, eng[i]) == 0) {

			printf("������ �ܾ �Է��Ͻÿ�:");
			scanf("%s", input_eng);

			printf("������ �ܾ��� ���� �Է��Ͻÿ�: ");
			scanf("%s", input_kor);
			
			strcpy(eng[i], input_eng);
			strcpy(kor[i], input_kor);
		}
		else {
			printf("%2d�� - �ܾ��忡 �����ϴ�.\n", i+1);	
		}
	}
}

void dekete(char (*input_eng), char (*eng), char (*kor)) {
//void delete(char input_eng[20], char eng[10][20],  char kor[10][20]) {
	printf("�����ϰ���� �ܾ �Է��Ͻÿ�:");
	scanf("%s", input_eng);
	for (int i = 0; i < 10; i++) {
		if (strcmp(input_eng, eng[i]) == 0) {

			for (int j = i; j < 9; j++) {
				strcpy(eng[j], eng[j + 1]);
				strcpy(kor[j], kor[j + 1]);
			}
		}
	}
}






int main_9(void) {
	
	/// ������ ���� ///
	/*long a = 4;  // ���� ����
	long* p;     // ������ ���� ����
	p = &a;     // ������ ������ �ּҰ� ����
	//p = 443;    // ������ ������ �� ����

	printf("a�� ��: %u\n", a);             // 4
	printf("a�� �ּ�: %u\n", &a);          // 420
	printf("p�� ��: %u\n", p);             // 420
	printf("p�� �ּ�: %u\n", &p);          // 456
	printf("p�� ����Ű�� ��: %u\n", *p);   // 4
	*/

	/// ������ ���� ///
	/*int a = 90;
	int *p;
	p = &a;

	printf("���� 	 �ּ� 	         ��	      ������\n");
	printf("%c \t %04x \t %4d \t %4x \n", 'a', &a, *p, p); // a�� ��, a�� �ּ�, p�� ��, p�� �ּ�
	*/
	
	/// #������� ������  ///
	/*printf("=====================================\n");
	call();
	printf("=====================================\n");*/

	/// ������ ������ �̿��Ͽ� ///
	/*char* str;
	str = "text";

	while(*str != '\0') {
		printf("%c", *str);
		str++;                  // �ּҰ��� �����ϸ� �� �ּҷ� �����Ѵ�,
	}
	*/

	///  %s�� �����̴�. ///            �⸻���
	/*char ptr1[] = "apple1";
	char *ptr2  = "apple2";

	printf("ptr2 + 1�� ��: %c \n",*ptr2);		 // �ڸ� ��
	printf("ptr2 + 1�� ��: %c \n",*(ptr2 + 1));  // ��ĭ�� ��
	printf("ptr2 + 1�� ��: %c \n",(*ptr2 + 1));  // �ڸ� ���� + 1
	printf("���ڿ� ptr1�� �ּҰ�: %d \n", ptr1);
	printf("���ڿ� ptr1�� ��: %c \n", *ptr1);
	printf("���ڿ� ptr2�� ��: %s \n", ptr2);     // %s�� ������ ����Ѵ�   // %s���� *�� ������ �ʴ´�.*/

	/// ���ڿ� ��� ///
	/*char ptr1[10] = "joon";
	char *ptr2;

	ptr2 = "yong";

	printf("%s\n", ptr1);
	printf("%s\n", ptr2);*/

	/// ������ ���� �����ϱ� ///
	/*int a = 1;
	int* p;
	p = &a;
	printf("%d\n", *p);
	*p = 2;
	printf("%d\n", *p);
	printf("%d\n", p);
	printf("%d\n", a);
	*/

	/// ������ ���� �����ϱ� ///
	/*char f[10] = "Korea";
	char* b;
	b = &f[2];
	printf("%s", b);*/

	/// ������ �����ϱ� ///      
	/*

	// ���ڿ� ���� �� ����
	char f[10] = "Korea";
	char* p;
	p = f;
	printf("%c \n", *p); // ��
	p++;
	printf("%c \n", *p); // ��
	//printf("%d \n",  p); // �ּ�
	//printf("%d \n",  f); // �ּ�

	printf("\n");      // -------------------------------------- //

	// ���ڿ� �ٷ� ����
	p = "abcd";
	//printf("%s \n", p); // ��    
	printf("%c \n", *p); // ��
	p++;
	printf("%c \n", *p); // ��
	//printf("%d \n",  p); // �ּ�
	*/

	//////////////////////////////////////////////////////////////////////////////////////////

	/// 2���� �迭 print Ÿ��	///
	/*char c[4][10] = {"Korea",
					"Japn", 
					"China", 
					"America"};
	char *a[] = {"Korea", 
				"Japn", 
				"China", 
				"America" };

	printf("c[0]   : %s\n", c[0]);    // �����̸� s
	printf("c[0][3]: %c\n", c[0][3]); // �ѱ��ڸ� c
	printf("c[1]   : %s\n", c[1]);    // �����̸� s
	printf("c[1][3]: %c\n", c[1][3]); // �ѱ��ڸ� c

	printf("\na[2]   : %s\n", a[2]);
	printf("a[2][3]: %c\n", a[2][3]);
	for (int i = 0; i < 4; i++) {
		printf("%s    ", c[i]);
	}
	printf("\n");
	for (int i = 0; i < 4; i++) {
		printf("%s    ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 4; i++) {
		printf("%s    ", *(a+i));
	}
	*/
	 

	///  ����� ���� �Լ��� ����ؼ� �迭�� �� ///
	/*int arr[5] = {1,3,2,5,4};
	//int* p = &arr[0];                   // �����
	
	int cnt = 0;
	//int* cntP = &cnt;

	sum_4(arr, &cnt);
	//sum_4(arr, &cntP);
	printf("�� : %d\n", cnt);
	*/

	/// ��,��,�� 1���� �迭 ////
	/*int kor[5] = {80, 90, 75, 72, 95};
	int eng[5] = { 90, 85, 80, 85, 100 };
	int math[5] = { 85, 95, 80, 75, 90 };
	int hap[5] = { 0 };

	avg(kor, eng, math, hap);

	printf("-------------------\n");
	printf(" ��  ��  ��  ��  ��\n");
	printf("-------------------\n");
	for (int i = 0; i < 5; i++)
	{
		hap[i] = kor[i] + eng[i] + math[i];
		printf("%3d %3d %3d %3d %3d\n", kor[i], eng[i], math[i], hap[i], hap[i] / 3);

	
	printf("-------------------\n");
	*/

	/// ��,��,�� 2���� �迭 ���� ////
	/*int jum[5][5] = {{80, 90, 70, 0, 0},
					  {90, 80, 60, 0, 0},
					  {70, 80, 90, 0, 0},
					  {80, 90, 70, 0, 0},
					  {90, 80, 60, 0, 0} };

	avg_2(jum);

	printf("-------------------\n");
	printf(" ��  ��  ��  ��  ��\n");
	printf("-------------------\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%3d %3d %3d %3d %3d\n", jum[i][0], jum[i][1], jum[i][2], jum[i][3], jum[i][3] / 3);

	}
	printf("-------------------\n");*/

	/// ���� �ܾ��� ����� main ���� ///
	/*char eng[10][20] = {"apple", "banana", "orange", "grape", "strawberry"};
	char kor[10][20] = {"���", "�ٳ���", "������", "����", "����"};
	char input_eng[20];
	char input_kor[20];
	int cho;

	while (1) {
		printf("----------------------------------------------------------\n");
		printf("[1. ���, 2. �˻�, 3. ����, 4.����, 5.ȭ�� �����, 6.���� ]\n�Է�:");
		scanf("%d", &cho);
		switch (cho)
		{
			case 1:
				for (int i = 0; i < strlen(eng); i++) {
					printf("%s\n", eng[i]);
				}
				break;
			case 2:
				printf("ã����� �ܾ �Է��Ͻÿ�:");
				scanf("%s", input_eng);
				for (int i = 0; i < 10; i++) {
					if (strcmp(input_eng, eng[i]) == 0) {
						printf("%s", eng[i]);
						printf("%s\n", kor[i]);
					}
				}
				break;
			case 3:
				printf("�����ϰ���� �ܾ �Է��Ͻÿ�:");
				scanf("%s", input_eng);
				for (int i = 0; i < 10; i++) {
					if (strcmp(input_eng, eng[i]) == 0) {
						
						printf("���� �ܾ �Է��Ͻÿ�:");
						scanf("%s", input_eng);
						
						printf("���� �ܾ��� ���� �Է��Ͻÿ�: ");
						scanf("%s", input_kor);
						
						strcpy(eng[i], input_eng);
						strcpy(kor[i], input_kor);
					}
				}
				break;
			case 4:
				printf("�����ϰ���� �ܾ �Է��Ͻÿ�:");
				scanf("%s", input_eng);
				for (int i = 0; i < 10; i++) {
					if (strcmp(input_eng, eng[i]) == 0) {

						for(int j = i; j < 9; j++) {
							strcpy(eng[j], eng[j + 1]);
							strcpy(kor[j], kor[j + 1]);
						}
					}
				}
				break;
			case 5:
				system("cls");
				break;
			case 6:
				return 0;
			default:
				printf("�Է°��� �߸�������ϴ�.\n");
			break;
		}
	}*/
	
	/// ���� �ܾ��� ����� �Լ� ���� ///
	/*char eng[10][20] = {"apple", "banana", "orange", "grape", "strawberry", "a"};
	char kor[10][20] = { "���", "�ٳ���", "������", "����", "����", "����"};
	char input_eng[20];
	char input_kor[20];
	
	int cho;

	while (1) {
		printf("----------------------------------------------------------\n");
		printf("[1. ���, 2. �˻�, 3. ����, 4.����, 5.ȭ�� �����, 6.����]\n�Է�:");
		scanf("%d", &cho);

		switch (cho)
		{
		case 1:
			print_1(eng, kor);
			break;
		case 2:
			search(input_eng, eng, kor);
			break;
		case 3:
			edit(eng, input_eng, kor, input_kor );
			break;
		case 4:
			delete(eng, input_eng, kor);
			break;
		case 5:
			system("cls");
			break;
		case 6:
			return 0;
		default:
			printf("�Է°��� �߸�������ϴ�.\n");
			break;
		}
	}
	*/



	////////////////////// ��� ������(���� �޸� Ȯ��) //////////////////////	
	// ������ ������ ���ڿ� �����ϰ� scanf�� �Է� �޾����� malloc���� �޸� Ȯ�� �ؾ��Ѵ�.

	char* p;
	//scanf("%s", p);
	p = (char*)malloc(12); // 12����Ʈ �޸� Ȯ��
	scanf("%s", p);
	printf("�Էµ� ���ڿ�:  % s", p);
	free(p);


	///////////////////// ����ü ////////////////////////////

















	/// ö���� ��ȣ�� �ּ� ///
	/*// [����]
	int ö�� = 10; // ��ȣ 10

	printf("��ö�� - ��: %d �ּ�: %d\n", ö��, &ö��);
	//printf("��: %d �ּ�: %d\n", �ؿ�, &�ؿ�);
	//printf("��: %d �ּ�: %d\n", ����, &����);

	// [������]
	int * ������;       // ������ ����
	������ = &ö��;	    // ö���� �ּҸ� �̼Ǹǿ��� �˷��ش�.
	printf("������ - ��: %d �ּ�: %d\n", *������, ������);
	
	// ��ȣ�� 3���϶�
	*������ = *������ * 3;				 // ö�� = ö�� * 3;
	printf("�̼Ǹ� - ��: %d �ּ�: %d\n", ö��, &ö��); 

	// [������]
	printf("<������ �̼� ������>\n");
	int * ������;
	������ = &ö��;		// ö���� �ּҸ� �����̿��� �˷��ش�.

	// �̼Ǹ��� �ٲ� ��ȣ�� 2�� ����
	*������ = *������ - 2;				// ö�� = ö�� - 2;
	printf("������ - ��: %d �ּ�: %d\n", *������, ������);

	// ö�� ���� �ּ�
	printf("��ö�� - ��: %d �ּ�: %d\n", ö��, &ö��);
	*/

	/// �迭 ///
	/*int arr[5] = {1,2,3,4,5};
	int * ptr = arr;				 // �迭�� �̸��� ������ �����̴�.
	for(int i = 0; i < 5; i++) {
		printf("%d \n", *(ptr + i)); // arr[i] == *(ptr + i)
	}
	printf("arr           : %d\n", arr);
	printf("arr[0]�� �ּ� : %d\n", &arr[0]);

	printf("arr �ּҾȿ� �� : %d\n", *arr);
	printf("arr �ּ��� �� : %d\n", arr);
	printf("arr �ּ��� �� : %d\n", *&arr);  // arr[0]�� ���� �ּ�
	*/

	/// �Լ��� �ּ� �ѱ�� ///
	/*int a = 10;
	int b = 20;
	printf("a: %d, b: %d\n", a, b);

	swap_2(&a, &b);  // �ּҸ� �ѱ�
	printf("a: %d, b: %d\n", a, b);
	*/
	
}