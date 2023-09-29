#include <stdio.h>
#include <stdlib.h> // abs() 함수를 사용하기 위한 헤더 파일

// 4장(수식, 연산문, 연산자)
// 5장(조건문)

int main_3(void) {

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

	/////// 5장 조건문	///////
	/*int num;
	scanf_s("%d", &num);

	if (num > 100 || num < 0)
		printf("입력 범위 오버");
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
		printf("노력좀해");*/

	// 2중 if문 과락 평균 
	/*int data, algo, base, hap;
	float mean;

	scanf_s("%d %d %d", &data, &algo, &base);

	hap = data + algo + base;

	mean = (float)hap / 3.0;

	printf("합 = %d\n", hap);
	printf("평균 = %.2f\n", mean);

	if (data >= 40 && algo >= 40 && base >= 40) {
		if (mean > 100 || mean < 0) {
			printf("입력 범위 오버");
		}
		else if (mean < 60) {
			printf("탈락(평균이 60점 이하입니다.)");
		}
		else {
			printf("PASS");
		}
	}
	else {
		printf("탈락(과락이 있습니다.)");
	}*/

	// 2중 if문 성적
	/*int num;

	printf("정수를 입력하세요.\n");
	scanf_s("%d", &num);

	if (num > 0) {
		printf("%d는 양수입니다.", num);
	}
	else if(num == 0){
		printf("%d는 0입니다.", num);
	}
	else {
		printf("%d는 음수입니다.", num);
		printf("절댓값은 %d입니다.", abs(num));
	}*/

	/*int n1, n2;
	
	printf("두 정수를 입력하세요.\n");
	scanf_s("%d %d", &n1, &n2);

	if (n1 == 0 || n2 == 0) {
		printf("0이 포함 되어있습니다\n");
	}
	else if (n1 > n2) {
		printf("%d가 %d보다 큽니다.\n", n1, n2);
		printf("실수: %d / %d = %.2f\n", n1, n2, (float)n1 / n2);
		printf("정수: %d / %d = %d\n", n1, n2, n1 / n2);
	}
	else {
		printf("%d가 %d보다 큽니다.\n", n2, n1);
		printf("실수: %d / %d = %.2f\n", n2, n1, (float)n2 / n1);
		printf("정수: %d / %d = %d\n", n2, n1, n2 / n1);
	}*/


	printf("%d", 5 != 5);

}