#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int x, y;     // �������� �̴�.(��� �Լ��鿡�� ����� �����ϴ�.)


// �Լ� ���� + ����
void ��������()
{
    printf("==========================\n");
}
int mean()
{
    int k, e, m;
    printf("��,��,�� ������ �Է��Ͻÿ�\n");
    scanf("%d %d %d", &k, &e, &m);
    return (k + e + m) / 3;
}
int hap()
{
    int a, b;                       // �������� �̴�.
    printf("�� ���� �Է��Ͻÿ�\n");
    scanf("%d %d", &a, &b);
	return a + b;
}
int minus()
{
    int a, b;
    printf("�� ���� �Է��Ͻÿ�\n");
    scanf("%d %d", &a, &b);
    return a - b;
}
int multi()
{
    int a, b;
    printf("�� ���� �Է��Ͻÿ�\n");
    scanf("%d %d", &a, &b);
    return a * b;
}
int divide()
{
    int a, b;
    printf("�� ���� �Է��Ͻÿ�\n");
    scanf("%d %d", &a, &b);
    return a / b;
}
void max() {
    int x, y;
    printf("�μ��� �Է¹����ÿ�: ");
    scanf("%d %d", &x, &y);

    if (x > y) {
        printf("%d", x);
	}
	else {
		printf("%d", y);
	}
}
int max2() {
    int x, y;
    printf("�μ��� �Է¹����ÿ�: ");
    scanf("%d %d", &x, &y);

    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}
int math_1(op) {
    x = 3;
    y = 2;
	if (op == '+') {
		return x + y;
	}
	else if (op == '-') {
		return x - y;
	}
	else if (op == '*') {
		return x * y;
	}
	else if (op == '/') {
		return x / y;
	}
	else {
		printf("�߸��� �������Դϴ�.");
	}

}
int chainge(a,b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("a: %d, b: %d", a, b);

}

void main()
{
    /// ĭ���� �Լ� ����� ���� ///
    /*��������();
    printf("���ؿ�\n");
    printf("���ؿ�\n");
    ��������();
    printf("���ؿ�\n");
    printf("���ؿ�\n");
    ��������();*/
    
    /// ��� ���ϴ� �Լ� ����� ���� ///
    /*int m = mean();
    printf("����� %d�̴�.", m);*/

    /// ���� �ΰ��� �� �� �� �����⸦ �ϴ� �Լ� ����� ���� ///
    /*int h = hap();
    int mi = minus();
	int mu = multi();
	int d = divide();

    printf("��: %d\n", h);
    printf("��: %d\n", mi);
    printf("��:%d\n", mu);
    printf("������: %d\n", d);*/

    /// �μ��� �Է¹ް� ū�� ���(return X) ///
    /*max();
    */

    /// �μ��� �Է¹ް� ū�� ���(return O) ///
    /*printf("%d", max2());
    */

    /// �� ���� �����ڸ� �Է¹޾� ����ϴ� ���α׷� ///
    /*char op;
    printf("�μ��� �����ڸ� �Է��Ͻÿ�: ");
    scanf_s("%d%d %c", &x, &y, &op, 1);
    
    int n = math_1(op);
    printf("%d", n);*/

    /// ��Ģ���� ���α׷��� ��ȣ�� �ޱ� ///
    /*int num;    
    char op;
    

    while (1) {

        printf("����ȭ��\n");
        printf("===================\n");
        printf("1.���� 2.���� 3.���� 4.������ 0.���α׷� ����\n");
        printf("===================\n");
        printf("#���ϴ� ��ȣ�� �Է� �����ϼ���: ");
        scanf("%d", &num);

        if (num == 1) {
            op = '+';
        }
        else if (num == 2) {
            op = '-';
        }
        else if (num == 3) {
            op = '*';
        }
        else if (num == 4) {
            op = '/';
        }
        else {
            return 0;
        }
        printf("%d",math_1(op));
    }*/

    /// ����� �����Լ����� �ΰ��� ��ȯ ///
    int a= 10, b = 20;
    chainge(a, b);

}