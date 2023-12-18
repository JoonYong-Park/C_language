#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>       // < > 원래 있는헤더파일
#include <stdlib.h>      // malloc()
#include <string.h> // strlen() 함수를 사용하기 위해 필요하다.

// 실기 문제 하나
// 구조체 포인터 까지
struct student1 {   
	char name[20];
	int kor, eng, mat;
	int tot;
};

struct phone {
	char name[20];
	char tel[20];
};

struct student {
	int no;
	char name[10];
	int score;
	int rank;
};

struct student2 {
	int num;
	char *name;        // 포인터 변수
	float score;
	int rank;
};

struct student3 {
	int no;
	char name[20];
	float score;
	int rank;
};

struct LIST {
	char name[20];
	int kor, eng, mat;
	int tot, avg;
};

//void prt(struct LIST *s) {   // 포인터는 배열처럼 사용 가능하다.
void prt2(struct LIST s[2]) {
	for (int i = 0; i < 2; i++) {
		// 포인터 버전
		/*s->tot = s->kor + s->eng + s->mat;
		printf("이름: %s, 국어: %d, 영어: %d, 수학: %d, 총점: %d\n", 
			s->name, s->kor, s->eng, s->mat, s->tot);
		s++;*/

		// 배열 버전
		s[i].tot = s[i].kor + s[i].eng + s[i].mat;
		printf("이름: %s, 국어: %d, 영어: %d, 수학: %d, 총점: %d\n", 
			s[i].name, s[i].kor, s[i].eng, s[i].mat, s[i].tot);

	}
}

/// 사용자정의 + 구조체 ///
void in(int* n1, char* na1, float* sc1, int* ra1) {
	int n, ra;
	char na[20];
	int sc;
	printf("학번 이름 점수 석차를 입력하세요!!!!!!!!!!!! :");
	scanf("%d %s %d %d\n", &n, na, &sc, &ra);
	//printf("%d %s %f %d\n", n, na, sc, ra);

	*n1 = n;
	strcpy(na1, na);
	*sc1 = sc;
	*ra1 = ra;

}

void in2(struct student *s) { 
	int n, ra;
	char na[20];
	float sc;

	printf("학번 이름 점수 석차를 입력하세요!!!!!!!!!!!! :");
	scanf("%d %s %f %d", &n, na, &sc, &ra);
	//printf("%d %s %f %d\n", n, na, sc, ra);

	s->no = n;
	strcpy(s->name, na);
	s->score = sc;
	s->rank = ra;

}

////////////////////////////////기말 대비 문제 사진	///////////////////////////////
struct employee {
	int no;
	char name[20];
	char dept[20];
	int pay;
};

void print(struct employee *s) {
	for(int i = 0; i < 5; i++) {
		printf("[사번: %d | 이름: %s | 부서: %s | 급여: %d]\n", s[i].no, s[i].name, s[i].dept, s[i].pay);
	}
}
void name_search(struct employee*s) {
	char na[20];
	int i;
	printf("검색할 이름을 입력하세요 :");
	scanf("%s", na);

	for(i = 0; i < 5; i++) {
		if (strcmp(s[i].name, na) == 0) {
			printf("[사번: %d | 이름: %s | 부서: %s | 급여: %d]\n", s[i].no, s[i].name, s[i].dept, s[i].pay);
			break;
		}
	}
	if (i == 5) {
		printf("검색한 이름이 없습니다.\n");
	}
}
void dept_search(struct employee*s) {
	char dept[20];
	int i;
	printf("검색할 부서를 입력하세요 :");
	scanf("%s", dept);
	for( i = 0; i < 5; i++) {
		if (strcmp(s[i].dept, dept) == 0) {
			printf("[사번: %d | 이름: %s | 부서: %s | 급여: %d]\n", s[i].no, s[i].name, s[i].dept, s[i].pay);
			break;
		}
	}
	if(i == 5) {
		printf("검색한 부서가 없습니다.\n");
	}
}
void total_pay(struct employee*s) {
	int tot = 0;
	for (int i = 0; i < 5; i++) {
		tot += s[i].pay;
	}
	printf("총급여 : %d\n", tot);
}



int main_10() {
	/// 구조체 배열 ///
	/*struct student1 s[5];

	for(int i = 0; i < 5; i++) {
		printf("이름, 국어, 영어, 수학 입력: ");
		scanf("%s %d %d %d", s[i].name, &s[i].kor, &s[i].eng, &s[i].mat);

		s[i].tot = s[i].kor + s[i].eng + s[i].mat;
	}

	for (int i = 0; i < 5; i++) {
		printf("이름: %s, 국어: %d, 영어: %d, 수학: %d, 총점: %d\n", s[i].name, s[i].kor, s[i].eng, s[i].mat, s[i].tot);
	}*/

	/// 5명의 사람의 이름과 전화번호를 입력 받아서 출력한다. ///
	/*struct phone p[5];
	for (int i = 0; i < 5; i++) {
		printf("이름, 전화번호 입력: ");
		scanf("%s %s", p[i].name, p[i].tel);
	}
	printf("이름\t전화번호\n====================\n");
	for (int i = 0; i < 5; i++) {
		printf("%s\t%s\n", p[i].name, p[i].tel);
	}*/

	/// 만들어 보기 ppt ///
	/*struct student s[2];

	for (int i = 0; i < 2; i++) {
		printf("이름, 학번, 점수 입력: ");
		scanf("%s %d %d", s[i].name, s[i].no, s[i].score);
	}*/

	/// 선언과 동시에 입력(동적할당 사용) ///                                     // (char*)malloc(20)
	/*struct student2 s;

	printf("학번 이름 점수 석차를 입력하시오: ");

	s.name = (char * )malloc(20);   // 메모리 확보
	scanf("%d %s %f %d", &s.num, s.name, &s.score, &s.rank); // 포인터 변수에는 데이터를 직접 넣을 수 없다.

	printf("학번: %d, 이름: %s, 점수: %f, 등수: %d\n", s.num, s.name, s.score, s.rank);
	*/

	/// main에서 이름 국 영 수를 입력 받고 출력	///
	/*struct student1 s;
	printf("이름, 국어, 영어, 수학 입력: ");
	scanf("%s %d %d %d", s.name, &s.kor, &s.eng, &s.mat);

	printf("이름: %s, 국어: %d, 영어: %d, 수학: %d\n", s.name, s.kor, s.eng, s.mat);*/

	/// main에서 이름 국 영 수를 입력 받고 출력(5명 버전) ///   3가지 방법
	/*struct LIST s[2];
	for(int i = 0; i < 2; i++) {
		printf("이름, 국어, 영어, 수학 입력: ");
		scanf("%s %d %d %d", &s[i].name, &s[i].kor, &s[i].eng, &s[i].mat);
		
	}

	for (int i = 0; i < 2; i++) {
		//printf("이름: %s, 국어: %d, 영어: %d, 수학: %d\n", s[i].name, s[i].kor, s[i].eng, s[i].mat);
	}
	prt(s);*/
		
	/// -> 연산자 ///  
	/*struct student3 s;
	struct student3 *sp = &s;

	sp -> no = 123456;
	strcpy_s((*sp).name,20, "나미");
	sp->score = 90.5;
	sp->rank = 1;

	printf("%d %s %f %d\n", sp->no, sp->name, sp->score, sp->rank);*/

	/// 구조체 포인터 배열 ///
	/*struct LIST list[3];
	struct LIST* p;

	p = list;

	for (int i = 0; i < 3; i++) {
		printf("이름 국 영 수 입력: ");

		scanf("%s ", p ->name);
		scanf("%d %d %d", &p->kor, &p->eng, &p->mat);

		p->tot = p->kor + p->eng + p->mat;
		p->avg = p->tot / 3;

		p++;
	}
	

	p--;
	p--;
	p--;

	// 출력
	printf("이름 국 영 수 총점\n");
	for(int i = 0; i < 3; i++) {
	  //printf("%s %d %d %d %d\n", p[i].name, p[i].kor, p[i].eng, p[i].mat, p[i].tot);
		printf("%3s %2d %2d %2d %2d\n", p->name, p->kor, p->eng, p->mat, p->tot);
		p++;
	}*/

	/// 사용자정의 + 구조체 ///
	/*struct student s;
	struct student *x = &s;
	
	//in(&s.no, s.name, &s.score, &s.rank);
	in2(x); 

	printf("학번  이름  점수  석차\n");
	//printf("%d %s %d %d\n", s.no, s.name, s.score, s.rank);
	printf("%d %s %d %d\n", x->no, x->name, x->score, x->rank);*/


	/// 구조체 포인터(기말 대비 문제) ///
	struct employee ss[5] = { {1001,"박준용","총무",3000},
		 					  {1002,"장지용","영업",3500},
	 						  {1003,"정호진","기획",3200},
 							  {1004,"김진희","영업",3700},
							  {1005,"이주연","총무",3300} };

	int cho;
	while (1) {
		printf("\n================================================================\n");
		printf("1.전체출력 2.이름검색 3.부서별검색 4.총급여 5.화면 지우기 6.종료\n선택:");
		scanf("%d", &cho);

		switch (cho)
		{
			case 1:
				print(ss);
				break;
			case 2:
				name_search(ss);
				break;
			case 3:
				dept_search(ss);
				break;
			case 4:
				total_pay(ss);
				break;
			case 5:
				system("cls");
				break;
			case 6:
				return 0;
				break;
			default:
				break;
		}


	}

}