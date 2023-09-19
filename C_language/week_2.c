#include <stdio.h> // 표준 라이브러리 헤더 파일
//#include "myheader.h" // 사용자 정의 헤더 파일

int main(void)
{
	///// 부호, 정수, 16진수, 8진수 ///
	/*printf("%d\n", 15);  // 부호없는 정수
	printf("%u\n", -15);  // 부호없는 정수
	printf("%x\n", 15);  // 16진수          
	printf("%o\n", 15);  // 8진수*/


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

}
