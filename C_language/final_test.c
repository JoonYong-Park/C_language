#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   // printf(), scanf()
#include <stdlib.h>  // malloc()
#include <string.h>  // strlen()

struct hotel {
	char gan[20];
	int myung;
	int day;
	char name[20];
	int num;
	int price;
};
void prt3(struct hotel *p) {
	for (int i = 0; i < 8; i++) {
		printf("[%5s %2d %2d %3s %5d %8d]\n", p->gan, p->myung, p->day, p->name, p->num, p->price);
		p++;
	}
}
void room(struct hotel *p) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		if (p->gan == NULL) {
			cnt++;
		}
	}
	printf("잔여 객실수: %d\n", cnt);
}
void cancel(struct hotel *p) {
	char name[20];
	printf("취소할 이름을 입력하세요\n");
	scanf("%s", name);

	for (int i = 0; i < 8; i++) {
		if (strcmp(p->name, name) == 0) {

			strcpy(p->gan, "");
			p->myung = 0;
			p->day = 0;
			strcpy(p->name, "");
			p->num = 0;
		}
		p++;
	}
}
void search2(struct hotel* p) {
	int cho2;
	char name[20];
	int num2 = 0;
	printf("========================================\n");
	printf("1. 객실검색 2. 전화번호 검색 0. 메인메뉴\n");
	printf("========================================\n");
	printf("번호를 입력하세요\n");
	scanf("%d", &cho2);

	switch (cho2)
	{
	case 1:
		printf("검색할 이름을 입력하세요\n");
		scanf("%s", name);
		for (int i = 0; i < 8; i++) {
			if (strcmp(p->gan, name)== 0) {
				printf("%s %d %d %s %d\n", p->gan, p->myung, p->day, p->name, p->num);
			}
			p++;
		}
		break;
	case 2:
		printf("검색할 전화번호를 입력하세요\n");
		scanf("%s", num2);
		for (int i = 0; i < 8; i++) {
			if (p->num == num2) {
				printf("%s %d %d %s %d\n", p->gan, p->myung, p->day, p->name, p->num);
			}
			p++;
		}
		break;
	case 0:
		return 0;
	default:
		break;
	}
	
}
// 통계
void tong(struct hotel* p) {
	int cho3;

	int han = 0;
	int song = 0;
	int won = 0;


	for (int i = 0; i < 8; i++) {
		if (strcmp(p->gan, "송백관") == 0) {
			han++;
		}
		else if (strcmp(p->gan, "한누리관") == 0) {
			song++;
		}
		won += p->price;


		p++;
	}
	printf("1. 예약관 별 건수 2. 전체금액 3. 메인메뉴\n");
	scanf("%d", &cho3);
	switch (cho3)
	{
		case 1:
			printf("송백관: %d건\n", han);
			printf("한누리관: %d건\n", song);
			break;
		case 2:
			printf("전체 금액 %d월\n", won);
			break;
		case 3:
			return 0;
	default:
		break;
	}




}
int main(){
	int cho;
	int* han = (int*)malloc(sizeof(int));
	int* song = (int*)malloc(sizeof(int));
	han = 3;
	song = 5;

	while (1) {


		struct hotel s[8] = { {"송백관",   2, 1, "김진희", 0101111, 120000},
							 {"송백관",   2, 1, "홍길동", 0102222, 100000},
							 {"송백관",   3, 1, "김미장", 0101113, 120000},
							 {"한누리관", 1, 1, "왕미순", 0101114, 100000},
							 {"송백관",   2, 1, "이가자", 0101115, 120000},
							 {"한누리관", 4, 1, "황귀순", 0101116, 160000},
							 {"송백관",   2, 1, "이가자", 0101117, 100000},
							 {"한누리관", 1, 1, "장필자", 0101110, 100000} };
		struct hotel* p = s;

		printf("\n===========================================================\n");
		printf("1. 예약리스트출력 2. 에약가능객실수 3. 검색 4. 취소 5. 통계\n");
		printf("===========================================================\n");
		printf("번호를 입력하세요: ");
		scanf("%d", &cho);

		switch (cho)
		{
		case 1:
			prt3(p);
			break;
		case 2:
			room(p);
			break;
		case 3:
			search2(p);
			break;
		case 4:
			cancel(p);
			break;
		case 5:
			tong(p);
			break;

		default:
			printf("잘못입력하셨습니다.\n");
			break;
		}

	}

	return 0;
}