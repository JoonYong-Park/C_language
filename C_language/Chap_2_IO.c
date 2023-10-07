#include <stdio.h>
//#define _CRT_SECUER_NO_WARNINGS   // scanf_s 사용시 오류 방지 (;없음)

// 2장 변수 선언 및 초기화, 입출력

int main_2(void)
{ 
	/// 정수형 변수의 선언과 초기화 ///
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

	/// 성적의 합과 평균을 구하는 프로그램 ///
	/*int kor, eng, mat, sum;
	float ave;

	scanf_s("%d %d %d", &kor, &eng, &mat);

	sum = kor + eng + mat;
	ave = sum / 3.0;

	printf("국어 점수 = %d\n", kor);
	printf("영어 점수 = %d\n수학 점수 = %d\n", eng, mat);
	printf("총점 값은  = %d\n평균 값은 = %.2f\n", sum, ave);

	return 0;*/

	/// 원의 둘레와 넓이를 구하는 프로그램 ///
	/*const int pi = 3.14;
	int radius;
	float cir, area;

	scanf_s("%d", &radius);

	cir = 2 * pi * radius;
	area = pi * radius * radius;

	printf("반지름 = %d\n", radius);
	printf("둘레 = %.2f\n", cir);
	printf("넓이 = %.2f\n", area);*/


	/// 주민번호와 나이를 구하는 프로그램 ///
	printf("주민번호를 입력하세요.\n예)990331\n");
	int num1, num2, num3;
	int age;
	scanf_s("%2d %2d %2d", &num1, &num2, &num3);

	age = 2023 - (1900 + num1);

	printf("19%d년 %d월 %d일\n", num1, num2, num3);
	printf("나이:%d", age);

}