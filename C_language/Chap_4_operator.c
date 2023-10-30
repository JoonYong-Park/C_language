#include <stdio.h>
#include <stdlib.h> // abs() 함수를 사용하기 위한 헤더 파일

// 4장(수식, 연산문, 연산자)

int main_4(void) {

	////////// 4장(수식, 연산문, 연산자) //////////
	/// 대입 연산자의 사용 형태에 따른 결과	///
	int x, y;
	int test_1, test_2, test_3, temp;

	x = 10;
	y = 20;

	test_1 = x + 40;
	test_2 = x + y;
	test_3 = y + (temp = x + 30);

	printf("x + 40의 값은 = %d\n", test_1);
	printf("x + y의 값은 = %d\n", test_2);
	printf("temp = x + 60의 값은 = %d\n", temp);
	printf("y + (temp = x + 30)의 값은 = %d\n", test_3);

	return 0;


	/*
	/// 주민번호로 생년윌일과 성별을 알아내는 프로그램 ///
	int s,y,m,d;

	printf("주민번로 7자리를 입력하시오:\nex)9903311\n");
	scanf_s("%2d %2d %2d %1d",&y, &m, &d, &s);

	printf("%d년 %d월 %d일 생입니다.\n", y+1900,m,d);

	if(s == 1 || s == 3)
		printf("남자입니다.\n");
	else if(s == 2 || s == 4)
		printf("여자입니다.\n");
	else
		printf("잘못 입력하셨습니다.\n");

	return 0;*/


	/// 증감 연산자 ///
	/*int a = 10, b = 20;

	printf("a = %d\n",a++);
	printf("a = %d\n",a);
	printf("b = %d\n",++b);
	printf("b = %d\n",b);*/
	
	/// 산술 연산자 ///
	/*int x, y, z;
	x = 5 == 5;
	y = 5 <= 9;
	z = (5 == 5) + (5 <= 9);

	printf("x = 5 == 5의 결과 : x = %d\n", x);
	printf("y = 5 <= 9의 결과 : y = %d\n", y);
	printf("z = (5 == 5) + (5 <= 9)의 결과 : z = %d\n", z);

	return 0;*/

	/// 관계 연산자 ///
	/*int x = 5, y = 10;

	printf("%d\n", 1 || 9);
	printf("%d\n",5 == 5) || (5 <= 9);
	printf("%d\n", (x < 6) || (y > 15));
	printf("%d\n", (1 || 0 == 4 > 6));*/
	
	/// 논리 연산자 우선순위///

	/*int x = 1, y = 8;
	int r1 = 0, r2 = 0, r3 = 0;

	r1 = (x < 4) ? 5 + 10 : 5 - 1;
	r2 = y < 4 || x <= 9 ? 8 + 3 : 9;
	r3 = !(x == 5) || y ? 100 : 200;

	printf("(x < 4) ? 5 + 10 : 5 - 1의 결과    : r1 = %d\n", r1);
	printf("y < 4 || x <= 9 ? 8 + 3 : 9의 결과 : r2 = %d\n", r2);
	printf("!(x == 5) || y ? 100 : 200의 결과  : r3 = %d\n", r3);

	return 0;*/

	/// 자료형의 크기 ///
	/*int x;
	double y;
	size_t r1, r2, r3, r4,r5;

	r1 = sizeof(int);
	r2 = sizeof(float);
	r3 = sizeof(x);
	r4 = sizeof(y);

	printf("sizeof(int)의 결과:   r1 = %u\n", r1);
	printf("sizeof(float)의 결과: r2 = %u\n", r2);
	printf("sizeof(x)의 결과:     r3 = %u\n", r3);
	printf("sizeof(y)의 결과:     r4 = %u\n", r4);*/

	


	

}