#include <stdio.h>
#include <stdlib.h> // abs() �Լ��� ����ϱ� ���� ��� ����

// 4��(����, ���깮, ������)

int main_4(void) {

	////////// 4��(����, ���깮, ������) //////////
	/// ���� �������� ��� ���¿� ���� ���	///
	int x, y;
	int test_1, test_2, test_3, temp;

	x = 10;
	y = 20;

	test_1 = x + 40;
	test_2 = x + y;
	test_3 = y + (temp = x + 30);

	printf("x + 40�� ���� = %d\n", test_1);
	printf("x + y�� ���� = %d\n", test_2);
	printf("temp = x + 60�� ���� = %d\n", temp);
	printf("y + (temp = x + 30)�� ���� = %d\n", test_3);

	return 0;


	/*
	/// �ֹι�ȣ�� �������ϰ� ������ �˾Ƴ��� ���α׷� ///
	int s,y,m,d;

	printf("�ֹι��� 7�ڸ��� �Է��Ͻÿ�:\nex)9903311\n");
	scanf_s("%2d %2d %2d %1d",&y, &m, &d, &s);

	printf("%d�� %d�� %d�� ���Դϴ�.\n", y+1900,m,d);

	if(s == 1 || s == 3)
		printf("�����Դϴ�.\n");
	else if(s == 2 || s == 4)
		printf("�����Դϴ�.\n");
	else
		printf("�߸� �Է��ϼ̽��ϴ�.\n");

	return 0;*/


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

	


	

}