#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 5장 조건문

int main() {
    /// 5명의 학번과 성적을 입력받아 1등과 꼴등을 출력하는 프로그램 ///
    /*int num, data, algo, pro;
    float sum, mean;
    int max = -999, min = 999;

    for (int i = 0; i < 5; i++) {
        printf("학번, 자료구조, 알고리즘, 프로그래밍 성적을 입력하시오.\n");
        scanf_s("%d %d %d %d", &num, &data, &algo, &pro);
        sum = data + algo + pro;
        mean = sum / 3.0;
        if(max < mean) max = num;
        if(min > mean) min = num;

    }
    printf("1 등: %d\n", max);
    printf("꼴등: %d\n", min);

    return 0;*/

    /// 윤년과 평년을 구분하시오 ///
    /*int year;

    printf("연도를 입력하시오:");
    scanf_s("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
				printf("윤년");
                return 0;
            }
            printf("평년");
            return 0;
        }
        printf("윤년");
    }
    else {
        printf("평년");
    }*/

    /// 전기요금 계산 ///
    /*int id, type, kw;
    float won;
    printf("아이디, 종별, 전기사용량을 입력하시오.\n");
    scanf_s("%d %d %d", &id, &type, &kw);
    kw *= 1.1;

    if (type == 1) {
        won = kw * 50.0;
    }
    else if (type == 2) {
        won = kw * 30.0;
    }
    else if (type == 3) {
        won = kw * 20.0;
    }
    printf("사용자 번호: %d\n 종별: %d\n 요금: %.2f", id, type, won);*/

    /// 입력이 대문자, 소문자, 특수문자, 숫자인지 판별 ///
    /*char ch;
    
    printf("입력하시오: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
		printf("대문자");
	}
	else if (ch >= 'a' && ch <= 'z') {
		printf("소문자");
	}
	else if (ch >= '0' && ch <= '9') {
		printf("숫자");
	}
	else {
		printf("특수문자");
	}*/

    /// 5장 연습문제 7번
    /*int year, month, day;
    printf("생년월일을 입력하기오(19990331)\n");
    scanf_s("%4d %2d %2d", &year, &month, &day);

    

    if (year % 12 == 0) {
		printf("원숭이띠");
	}
	else if (year % 12 == 1) {
		printf("닭띠");
	}
	else if (year % 12 == 2) {
		printf("개띠");
	}
	else if (year % 12 == 3) {
		printf("돼지띠");
	}
	else if (year % 12 == 4) {
		printf("쥐띠");
	}
	else if (year % 12 == 5) {
		printf("소띠");
	}
	else if (year % 12 == 6) {
		printf("범띠");
	}
	else if (year % 12 == 7) {
		printf("토끼띠");
	}
	else if (year % 12 == 8) {
		printf("용띠");
	}
	else if (year % 12 == 9) {
		printf("뱀띠");
	}
	else if (year % 12 == 10) {
		printf("말띠");
	}
	else if (year % 12 == 11) {
		printf("양띠");
    }*/

    int y, m, d, x;

    char ani[12][13] = { "원숭이","닭", "개", "돼","쥐","소","호랑이","토끼","용","뱀","양" };



    scanf_s("%d %d %d", &y, &m, &d);

    x = y % 12;



    printf("%d년생 %s띠 입니다.", y, ani[x]);

    // 주차관리 프로그래밍 ㅔ -p192 3번
    // 1. 알고리즘
    // 2. 수도코드
    // 3. C언어 코드
    // 입력값 시:분

    // 안내 표지판 풀력(가격표)
    // 하루 요금은 15000원
    // 정기권 1개월 100000원
    // 

}
