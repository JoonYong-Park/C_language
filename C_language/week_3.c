#include <stdio.h>
#include <stdlib.h> // abs() �Լ��� ����ϱ� ���� ��� ����

// 4��(����, ���깮, ������)
// 5��(���ǹ�)

int main_3(void) {

	/// ���� ������ ///
	/*int a = 10, b = 20;

	printf("a = %d\n",a++);
	printf("a = %d\n",a);
	printf("b = %d\n",++b);
	printf("b = %d\n",b);*/
	
	/// ��� ������ ///
	/*int x, y, z;
	x = 5 == 5;
	y = 5 <= 9;
	z = (5 == 5) + (5 <= 9);

	printf("x = 5 == 5�� ��� : x = %d\n", x);
	printf("y = 5 <= 9�� ��� : y = %d\n", y);
	printf("z = (5 == 5) + (5 <= 9)�� ��� : z = %d\n", z);

	return 0;*/

	/// ���� ������ ///
	/*int x = 5, y = 10;

	printf("%d\n", 1 || 9);
	printf("%d\n",5 == 5) || (5 <= 9);
	printf("%d\n", (x < 6) || (y > 15));
	printf("%d\n", (1 || 0 == 4 > 6));*/
	
	/// �� ������ �켱����///

	/*int x = 1, y = 8;
	int r1 = 0, r2 = 0, r3 = 0;

	r1 = (x < 4) ? 5 + 10 : 5 - 1;
	r2 = y < 4 || x <= 9 ? 8 + 3 : 9;
	r3 = !(x == 5) || y ? 100 : 200;

	printf("(x < 4) ? 5 + 10 : 5 - 1�� ���    : r1 = %d\n", r1);
	printf("y < 4 || x <= 9 ? 8 + 3 : 9�� ��� : r2 = %d\n", r2);
	printf("!(x == 5) || y ? 100 : 200�� ���  : r3 = %d\n", r3);

	return 0;*/

	/// �ڷ����� ũ�� ///
	/*int x;
	double y;
	size_t r1, r2, r3, r4,r5;

	r1 = sizeof(int);
	r2 = sizeof(float);
	r3 = sizeof(x);
	r4 = sizeof(y);

	printf("sizeof(int)�� ���:   r1 = %u\n", r1);
	printf("sizeof(float)�� ���: r2 = %u\n", r2);
	printf("sizeof(x)�� ���:     r3 = %u\n", r3);
	printf("sizeof(y)�� ���:     r4 = %u\n", r4);*/

	/////// 5�� ���ǹ�	///////
	/*int num;
	scanf_s("%d", &num);

	if (num > 100 || num < 0)
		printf("�Է� ���� ����");
	else if (num > 90 && num <= 100)
		printf("A");
	else if (num > 80 && num <= 90)
		printf("B");
	else if (num > 70 && num <= 80)
		printf("C");
	else if (num > 60 && num <= 70)
		printf("D");
	else if (num <= 60)
		printf("F");
	else
		printf("�������");*/

	// 2�� if�� ���� ��� 
	/*int data, algo, base, hap;
	float mean;

	scanf_s("%d %d %d", &data, &algo, &base);

	hap = data + algo + base;

	mean = (float)hap / 3.0;

	printf("�� = %d\n", hap);
	printf("��� = %.2f\n", mean);

	if (data >= 40 && algo >= 40 && base >= 40) {
		if (mean > 100 || mean < 0) {
			printf("�Է� ���� ����");
		}
		else if (mean < 60) {
			printf("Ż��(����� 60�� �����Դϴ�.)");
		}
		else {
			printf("PASS");
		}
	}
	else {
		printf("Ż��(������ �ֽ��ϴ�.)");
	}*/

	// 2�� if�� ����
	/*int num;

	printf("������ �Է��ϼ���.\n");
	scanf_s("%d", &num);

	if (num > 0) {
		printf("%d�� ����Դϴ�.", num);
	}
	else if(num == 0){
		printf("%d�� 0�Դϴ�.", num);
	}
	else {
		printf("%d�� �����Դϴ�.", num);
		printf("������ %d�Դϴ�.", abs(num));
	}*/

	/*int n1, n2;
	
	printf("�� ������ �Է��ϼ���.\n");
	scanf_s("%d %d", &n1, &n2);

	if (n1 == 0 || n2 == 0) {
		printf("0�� ���� �Ǿ��ֽ��ϴ�\n");
	}
	else if (n1 > n2) {
		printf("%d�� %d���� Ů�ϴ�.\n", n1, n2);
		printf("�Ǽ�: %d / %d = %.2f\n", n1, n2, (float)n1 / n2);
		printf("����: %d / %d = %d\n", n1, n2, n1 / n2);
	}
	else {
		printf("%d�� %d���� Ů�ϴ�.\n", n2, n1);
		printf("�Ǽ�: %d / %d = %.2f\n", n2, n1, (float)n2 / n1);
		printf("����: %d / %d = %d\n", n2, n1, n2 / n1);
	}*/


	printf("%d", 5 != 5);

}