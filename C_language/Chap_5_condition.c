#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 5장 조건문

int main_5() {

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


	/// 국영수 평균 등급 ///
	//int k, e, m;
	//int mean;

	//printf("국어, 영어, 수학 점수를 입력하시오\n");
	//scanf("%d %d %d", &k, &e, &m);

	//mean = (k + e + m) / 3;

	//printf("평균: %d\n", mean);
	//
	//// if문
	//if (mean > 90) {
	//	printf("수!!\n");
	//}
	//else if (mean > 80) {
	//	//printf("우!!\n");
	//}
	//else if (mean > 70) {
	//	//printf("미!!\n");
	//}
	//else {
	//	//printf("재시험!!\n");
	//}

	//// switch문
	//switch (mean / 10) {
	//	case 10: printf("수(100점)!!\n");
	//	break;
	//	case 9: printf("수!!\n");
	//	break;
	//	case 8: printf("우!!\n");
	//	break;
	//	case 7: printf("미!!\n");
	//	break;
	//	case 6: printf("재시험!!\n");
	//	break;
	//}
}
