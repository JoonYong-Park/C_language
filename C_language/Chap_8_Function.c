#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int x, y;     // 전역변수 이다.(모든 함수들에서 사용이 가능하다.)


// 함수 선언 + 정의
void 스폰지밥()
{
    printf("==========================\n");
}
int mean()
{
    int k, e, m;
    printf("국,영,수 점수를 입력하시오\n");
    scanf("%d %d %d", &k, &e, &m);
    return (k + e + m) / 3;
}
int hap()
{
    int a, b;                       // 지역변수 이다.
    printf("두 수를 입력하시오\n");
    scanf("%d %d", &a, &b);
	return a + b;
}
int minus()
{
    int a, b;
    printf("두 수를 입력하시오\n");
    scanf("%d %d", &a, &b);
    return a - b;
}
int multi()
{
    int a, b;
    printf("두 수를 입력하시오\n");
    scanf("%d %d", &a, &b);
    return a * b;
}
int divide()
{
    int a, b;
    printf("두 수를 입력하시오\n");
    scanf("%d %d", &a, &b);
    return a / b;
}
void max() {
    int x, y;
    printf("두수를 입력받으시오: ");
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
    printf("두수를 입력받으시오: ");
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
		printf("잘못된 연산자입니다.");
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
    /// 칸막이 함수 만들어 보기 ///
    /*스폰지밥();
    printf("박준용\n");
    printf("박준용\n");
    스폰지밥();
    printf("박준용\n");
    printf("박준용\n");
    스폰지밥();*/
    
    /// 평균 구하는 함수 만들어 보기 ///
    /*int m = mean();
    printf("평균은 %d이다.", m);*/

    /// 숫자 두개를 합 차 곱 나누기를 하는 함수 만들어 보기 ///
    /*int h = hap();
    int mi = minus();
	int mu = multi();
	int d = divide();

    printf("합: %d\n", h);
    printf("차: %d\n", mi);
    printf("곱:%d\n", mu);
    printf("나누기: %d\n", d);*/

    /// 두수를 입력받고 큰수 출력(return X) ///
    /*max();
    */

    /// 두수를 입력받고 큰수 출력(return O) ///
    /*printf("%d", max2());
    */

    /// 두 수와 연산자를 입력받아 계산하는 프로그램 ///
    /*char op;
    printf("두수와 연산자를 입력하시오: ");
    scanf_s("%d%d %c", &x, &y, &op, 1);
    
    int n = math_1(op);
    printf("%d", n);*/

    /// 사칙연산 프로그램을 번호로 받기 ///
    /*int num;    
    char op;
    

    while (1) {

        printf("실행화면\n");
        printf("===================\n");
        printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 0.프로그램 종료\n");
        printf("===================\n");
        printf("#원하는 번호를 입력 선택하세요: ");
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

    /// 사용자 정의함수에서 두값을 변환 ///
    int a= 10, b = 20;
    chainge(a, b);

}