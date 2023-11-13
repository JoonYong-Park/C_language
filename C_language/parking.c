#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_parking() {

	int in_hour, in_min;
	int out_hour, out_min;
	int discount, night =0;
	int hour, min, all_time;
	int fee = 0;

	// 가격표
	printf("---[주차장 이용 안내문]---\n");
	printf("[기본 사용료 (30분) : 500원]\n[초과 사용료 (15분) : 300원]\n");
	printf("[보호자증 지참시 4시간 무료]\n[보호자증 지참시 18:00 ~ 24:00(야간): 1000원 추가]\n");
	printf("--------------------------------------------\n");

	// 보호자증 지참 여부
	printf("\n[보호자증 지참 여부]\nex) 있다 -> 1\n    없다 -> 0\n");
	scanf("%d", &discount);

	// 입력값이 올바른지 확인
	if (discount != 1 && discount != 0) {
		printf("[Error] 보호자증 지참 여부는 1 또는 0만 입력 가능합니다.\n");
		return 1;
	}

	// 입차시간
	printf("\n[입차 시간을 입력하세요]\nex) 13시 30분 -> 1330\n");
	scanf("%2d %2d", &in_hour, &in_min);

	// 출차시간
	printf("\n[출차 시간을 입력하세요]\nex) 17시 30분 -> 1730\n");
	scanf("%2d %2d", &out_hour, &out_min);

	// 주차 시간 계산
	if (out_hour < in_hour) {
		out_hour += 24;
	}

	hour = out_hour - in_hour;
	min = out_min - in_min;
	
	if (min < 0) {
		min += 60;
		hour -= 1;
	}
	all_time = hour * 60 + min;

	// 주차 요금 계산
	// 보호자증 소지 시
	if (discount == 1) {
		// 4시간 무료
		if (hour <= 4) {
			fee = 0;
		}
		// 4시간 이후부터는 기본 요금 적용
		else{
			fee = 300 * ((all_time - 240) / 15); // 초반 4시간 무료
			// 야간 추가 요금
			if (out_hour > 18) {
				fee += 1000;                   
				night += 1;
			}
		}
	}
	// 보호자증 미소지 시
	else {
		fee = 500 + 300 * ((all_time-30) / 15); // 초반 30분 500원
	}

	// 주차 요금 출력
	printf("\n> 주차장 이용 시간: %d시간 %d분 \n", hour, min);
	printf("> 보호자증 여부 : %s \n", discount ? "있음(4시간 무료)" : "없음");
	printf("> 야간 추가 요금 : +%s \n", night ? "1000원" : "0원");
	printf("> 총합 주차 요금 : %d원 \n", fee);

	return 0;
}