// #include "myheader.h" // 사용자 정의 헤더 파일
#include <stdio.h> // 표준 라이브러리 헤더 파일

// 3장 (변수, 자료형, 상수)

int main_3(void)
{
	///// 부호, 정수, 16진수, 8진수 ///
	//printf("%d\n", 15);  // 부호없는 정수
	//printf("%u\n", -15);  // 부호있는 정수
	//printf("%x\n", 15);  // 16진수          
	//printf("%o\n", 15);  // 8진수


	///// 알아두면 좋은것	///
	/*printf("%d\n", 65);  // 65
	printf("%c\n",65);  // A 
	printf("%c\n",97);  // a*/

	/// 초를 분으로 ///
	/*int t, s, m, h;
	printf("초를 입력하세요: ");
	scanf_s("%d", &t);
	
	h = (t / 3600);
	m = (t % 3600)/ 60;
	s = (t % 3600)% 60;

	printf("%d초는 %d시간 %d분 %d초입니다.\n", t, h, m, s);*/


	/////시습시간 /////
	/// 평균 구하기 ///
	/*int data, algo, net, num;
	int sum;
	float mean;

	printf("학번, 자료구조, 알고리즘, 네트워크 성적을 입력하시오.");
	scanf_s("%d %d %d %d", &num, &algo, &net, &data);

	sum = algo + net + data;
	mean = sum / 3.0;

	printf("학번: %d\n", num);
	printf("평균: %.2f\n", mean);*/


	/// BMI 구하기 ///
	/*int kg, cm;
	float bmi;
	printf("키와 몸무게를 입력하시오.\n");
	scanf_s("%d %d", &cm, &kg);

	bmi = (float)kg / ((cm/100) * (cm/100));
	printf("BMI: %.2f\n", bmi);*/


	/// 삼각형의 넓이 구하기 ///
	/*int width, height;
	float area;
	printf("삼각형의 밑면과 높이를 입력하시오.\n");
	scanf_s("%d %d", &width, &height);

	area = width * height / 2;

	printf("삼각형의 넓이는 %.2f", area);*/

	

}