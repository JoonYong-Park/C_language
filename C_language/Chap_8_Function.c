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

void sum(int d){
    static int ys = 0;
    int ns = 0;

    ys = ys + d;
    ns = ns + d;

    printf("yes: %d, no: %d\n", ys, ns);
}

int sum_2( int xarr[3]) {
    int i = 0, j = 0;
    while(xarr[i] != '\0') {
		j += xarr[i++];
	}
    return j;
}

int sum_3(char xarr[4][10]) {
    int i = 0, j = 0;
    
    while(xarr[i] != '\0') {
        return j;
	}
}

void swap(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("a: %d, b: %d", a, b);

}

int jumsu(int jum[5][5]) {
    int hap = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            jum [i][3] += jum[i][j];
            jum [i][4] = jum[i][3] / 3;


        }
        
    }

}

double factorial(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

void out(char name[], char num[]) {
    for (int i = 0; i < 5; i++) {
        printf("%s: %s\n", name[i], num[i]);
    }
}

void main_8()
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
    /*int a= 10, b = 20;
    chainge(a, b);*/

    /// static ���� ///
    /*int a;
    for(int i = 0; i < 5; i++) {
        sum(i);
    }*/

    /// �Ű����� �迭 ///
    //int arr[3] = { 1,2,3 };
    //int x;
    //x = sum_2(arr);  //== &arr[0]
    //printf("%d ", x);

    /// �Ű����� �迭 ///
    //char arr[4][10] = { "�ؿ�", "����","ȣ��", "�ֿ�"};
    //int x;
    //x = sum_3(arr);  //== &arr[0]
    //printf("%d ", x);

    /// �Ű����� ü���� ///
    //int a = 10, b = 20;
    //swap(a, b);
    //printf("a: %d, b: %d", a, b);  // ����� ���� �Լ��� �ٲ���� ���ο��� �ٲ�� �ƴϴ�.

    /// ������ ���� 5�� �Կ��ް� ����� �����Լ����� ����� ���� �� ���ο��� ��� ///
    /*int jum[5][5] = {{80, 90, 70, 0, 0},
					 {90, 80, 60, 0, 0},
					 {70, 80, 90, 0, 0},
					 {80, 90, 70, 0, 0},
                     {90, 80, 60, 0, 0 } };
    jumsu(jum);

    printf("��ȣ  ����   ����   ����   ����   ���\n");
    printf("======================================\n");

    for (int i = 0; i < 5; i++) {
        printf(" %d     ",i+1);
        for (int j = 0; j < 5; j++) {
            printf("%d     ",jum[i][j]);
        }
        printf("\n");
    }*/

    /// ���丮�� ///
    /*int n;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &n);
    printf("%d! = %.0f", n, factorial(n));*/

    char name[5][10] = { "���ؿ�", "������", "��ȣ��", "������", "������" };
    char num[5][15] = { "010-1111-1111","010-2222-2222","010-3333-3333","010-4444-4444","010-5555-5555" };
    int choice = 0;
    char name2[9];

    while (1) {
        printf("====================================\n");
        printf("= 1.��ü ���   2.�˻�   3.����    =\n");
        printf("====================================\n");
        printf("��ȣ �Է�:");
        scanf("%d", &choice);

        if (choice == 1) {
            return(name, num);
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

    }



    return 0;
}