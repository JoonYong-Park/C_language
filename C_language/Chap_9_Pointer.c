#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>       // < > ���� �ִ��������
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
	// 
	//int hap[5] = {0};

	for (int i = 0; i < 5; i++){
		for(int j = 0; j < 3; j++) {
			jum[i][3] += jum[i][j];
			jum[i][4] = jum[i][3] / 3;
		}
	}
}

int main(void) {
	
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
	//int a = 90;
	//int *p;
	//p = &a;
	//printf("���� 	 �ּ� 	         ��	      ������\n");
	//printf("%c \t %04x \t %4d \t %4x \n", 'a', &a, *p, p); // a�� ��, a�� �ּ�, p�� ��, p�� �ּ�

	
	/// #������� ������  ///
	/*printf("=====================================\n");
	call();
	printf("=====================================\n");*/

	/// ������ ������ �̿��Ͽ� ///
	//char* str;
	//str = "text";

	//while(*str != '\0') {
	//	printf("%c", *str);
	//	str++;                  // �ּҰ��� �����ϸ� �� �ּҷ� �����Ѵ�,
	//}


	///  %s�� �����̴�. ///
	//char ptr1[] = "text1";
	//char *ptr2 = "text2";

	//printf("ptr2 + 1�� ��: %c \n",*(ptr2 + 1)); // 
	//printf("ptr2 + 1�� ��: %c \n",(*ptr2 + 1)); // 
	//printf("���ڿ� ptr1�� ��: %c \n", *ptr1);
	//printf("���ڿ� ptr2�� ��: %s \n", ptr2);     // %s�� ������ ����Ѵ�   // %s���� *�� ������ �ʴ´�.

	/// 
	/*char ptr1[10] = "joon";
	char *ptr2;

	ptr2 = "yong";

	printf("%s\n", ptr1);
	printf("%s\n", ptr2);*/

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
	printf("c[0]   : %c\n", c[0][3]);
	printf("a[2]   : %s\n", a[2]);
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
	}*/

	// c[0]: Korea
	// c[0] : e
	// a[2] : China
	// a[2][3] : n
	// Korea    Japn    China    America
	// Korea    Japn    China    America
	// Korea    Japn    China    America

	///  ����� ���� �Լ��� ����ؼ� �迭�� �� ///
	//int arr[5] = { 1,3,2,5,4 };
	////int* p = &arr[0];                   // �����
	//
	//int cnt = 0;
	////int* cntP = &cnt;

	//sum_4(arr, &cnt);
	////sum_4(arr, &cntP);
	//printf("�� : %d\n", cnt);

	/// ��,��,�� ���� �迭 ���� ////
	/*int kor[5] = { 80, 90, 75, 72, 95 };
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

	}
	printf("-------------------\n");*/


	// ��,��,�� 
	/*int kor[5] = { 80, 90, 75, 72, 95 };
	int eng[5] = { 90, 85, 80, 85, 100 };
	int math[5] = { 85, 95, 80, 75, 90 };
	int hap[5] = { 0 };*/

	int jum[5][5] = { {80, 90, 70, 0, 0},
					 {90, 80, 60, 0, 0},
					 {70, 80, 90, 0, 0},
					 {80, 90, 70, 0, 0},
					 {90, 80, 60, 0, 0 } };


	avg_2(jum);

	printf("-------------------\n");
	printf(" ��  ��  ��  ��  ��\n");
	printf("-------------------\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%3d %3d %3d %3d %3d\n", jum[i][0], jum[i][1], jum[i][2], jum[i][3], jum[i][3] / 3);

	}
	printf("-------------------\n");



	/// ö���� ��ȣ�� �ּ� ///
	/*int ö�� = 10; // ��ȣ 10

	printf("��ö�� - ��: %d �ּ�: %d\n", ö��, &ö��);
	//printf("��: %d �ּ�: %d\n", �ؿ�, &�ؿ�);
	//printf("��: %d �ּ�: %d\n", ����, &����);

	// [�̼Ǹ�]
	int * �̼Ǹ�;       // ������ ����
	�̼Ǹ� = &ö��;	    // ö���� �ּҸ� �̼Ǹǿ��� �˷��ش�.
	printf("�̼Ǹ� - ��: %d �ּ�: %d\n", *�̼Ǹ�, �̼Ǹ�);
	
	// ��ȣ�� 3���϶�
	*�̼Ǹ� = *�̼Ǹ� * 3;				 // ö�� = ö�� * 3;
	printf("�̼Ǹ� - ��: %d �ּ�: %d\n", ö��, &ö��); 

	// [������]
	int * ������;
	������ = &ö��;		// ö���� �ּҸ� �����̿��� �˷��ش�.

	// �̼Ǹ��� �ٲ� ��ȣ�� 2�� ����
	printf("<������ �̼� ������>\n");
	*������ = *������ - 2;				// ö�� = ö�� - 2;
	printf("������ - ��: %d �ּ�: %d\n", *������, ������);

	// ö�� ���� �ּ�
	printf("��ö�� - ��: %d �ּ�: %d\n", ö��, &ö��);*/

	/// �迭 ///
	/*int arr[5] = {1,2,3,4,5};
	int * ptr = arr;		// �迭�� �̸��� ������ �����̴�.
	for(int i = 0; i < 5; i++) {
		printf("%d \n", *(ptr + i));
	}
	printf("arr : %d\n", arr);
	printf("arr[0]�� �ּ�: %d\n", &arr[0]);

	printf("arr �ּҾȿ� �� : %d\n", *arr);
	printf("arr �ּ��� �� : %d\n", arr);
	printf("arr �ּ��� �� : %d\n", *&arr);*/

	/// �Լ��� �ּ� �ѱ�� ///
	/* int* a = 10;
	int b = 20;
	printf("a: %d, b: %d\n", a, b);

	swap_2(&a, &b);  // �ּҸ� �ѱ�
	printf("a: %d, b: %d\n", a, b);*/

	

}