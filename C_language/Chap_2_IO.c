#include <stdio.h>
//#define _CRT_SECUER_NO_WARNINGS   // scanf_s ���� ���� ���� (;����)

// 2�� ���� ���� �� �ʱ�ȭ, �����

int main_2(void)
{ 
	/// ������ ������ ����� �ʱ�ȭ ///
	/*int x;
	int y;
	int sum;

	x = 10;
	y = 20;

	sum = x + y;

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("sum = %d\n", sum);

	return 0;*/

	/// ������ �հ� ����� ���ϴ� ���α׷� ///
	/*int kor, eng, mat, sum;
	float ave;

	scanf_s("%d %d %d", &kor, &eng, &mat);

	sum = kor + eng + mat;
	ave = sum / 3.0;

	printf("���� ���� = %d\n", kor);
	printf("���� ���� = %d\n���� ���� = %d\n", eng, mat);
	printf("���� ����  = %d\n��� ���� = %.2f\n", sum, ave);

	return 0;*/

	/// ���� �ѷ��� ���̸� ���ϴ� ���α׷� ///
	/*const int pi = 3.14;
	int radius;
	float cir, area;

	scanf_s("%d", &radius);

	cir = 2 * pi * radius;
	area = pi * radius * radius;

	printf("������ = %d\n", radius);
	printf("�ѷ� = %.2f\n", cir);
	printf("���� = %.2f\n", area);*/


	/// �ֹι�ȣ�� ���̸� ���ϴ� ���α׷� ///
	printf("�ֹι�ȣ�� �Է��ϼ���.\n��)990331\n");
	int num1, num2, num3;
	int age;
	scanf_s("%2d %2d %2d", &num1, &num2, &num3);

	age = 2023 - (1900 + num1);

	printf("19%d�� %d�� %d��\n", num1, num2, num3);
	printf("����:%d", age);

}