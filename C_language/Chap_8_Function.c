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
    /*int a= 10, b = 20;
    chainge(a, b);*/

    /// static 변수 ///
    /*int a;
    for(int i = 0; i < 5; i++) {
        sum(i);
    }*/

    /// 매개변수 배열 ///
    //int arr[3] = { 1,2,3 };
    //int x;
    //x = sum_2(arr);  //== &arr[0]
    //printf("%d ", x);

    /// 매개변수 배열 ///
    //char arr[4][10] = { "준용", "지용","호진", "주연"};
    //int x;
    //x = sum_3(arr);  //== &arr[0]
    //printf("%d ", x);

    /// 매개변수 체인지 ///
    //int a = 10, b = 20;
    //swap(a, b);
    //printf("a: %d, b: %d", a, b);  // 사용자 정의 함수가 바뀐거지 메인에서 바뀐게 아니다.

    /// 국영수 점수 5명 입역받고 사용자 정의함수에서 평균을 구한 후 메인에서 출력 ///
    /*int jum[5][5] = {{80, 90, 70, 0, 0},
					 {90, 80, 60, 0, 0},
					 {70, 80, 90, 0, 0},
					 {80, 90, 70, 0, 0},
                     {90, 80, 60, 0, 0 } };
    jumsu(jum);

    printf("번호  국어   영어   수학   총합   평균\n");
    printf("======================================\n");

    for (int i = 0; i < 5; i++) {
        printf(" %d     ",i+1);
        for (int j = 0; j < 5; j++) {
            printf("%d     ",jum[i][j]);
        }
        printf("\n");
    }*/

    /// 펙토리얼 ///
    /*int n;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    printf("%d! = %.0f", n, factorial(n));*/

    char name[5][10] = { "박준용", "장지용", "정호진", "김진희", "이은상" };
    char num[5][15] = { "010-1111-1111","010-2222-2222","010-3333-3333","010-4444-4444","010-5555-5555" };
    int choice = 0;
    char name2[9];

    while (1) {
        printf("====================================\n");
        printf("= 1.전체 출력   2.검색   3.종료    =\n");
        printf("====================================\n");
        printf("번호 입력:");
        scanf("%d", &choice);

        if (choice == 1) {
            return(name, num);
        }

        else if (choice == 2) {
            int i;
            printf("이름 입력:");
            scanf("%s", name2);

            for (i = 0; i < 5; i++) {
                if (strcmp(name[i], name2) == 0) {
                    printf("%s: %s\n", name[i], num[i]);
                }
            }
            if (i == 5) {
                printf("없는 이름입니다.\n");
            }
        }
        else if (choice == 3) {
            return 0;
        }

        else {
            printf("잘못된 입력입니다.");
        }

        printf("====================================\n");

    }



    return 0;
}