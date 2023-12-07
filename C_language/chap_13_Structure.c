#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>       // < > 원래 있는헤더파일
#include <stdlib.h>      
#include <string.h>

struct student {   
	char name[20];
	int kor, eng, mat;
	int tot;
};

struct phone {
	char name[20];
	char tel[20];
};

struct student2 {
	int num;
	char *name;
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


//void score(struct student s) {
void score(struct student *s) {   // 포인터는 배열처럼 사용 가능하다.
	for (int i = 0; i < 5; i++) {
		/*s[i].tot = s[i].kor + s[i].eng + s[i].mat;
		printf("이름: %s, 국어: %d, 영어: %d, 수학: %d, 총점: %d\n", s[i].name, s[i].kor, s[i].eng, s[i].mat, s[i].tot);*/
		s->tot = s->kor + s->eng + s->mat;
		printf("이름: %s, 국어: %d, 영어: %d, 수학: %d, 총점: %d\n", s->name, s->kor, s->eng, s->mat, s->tot);
		s++;
	}
}

int main() {
	/// 구조체 배열 ///
	/*struct student s[5];

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

	/// 만들어 보기 ppt
	/*char name[2][15];
	int stu[2][2];
	
	struct student s[2];

	for (int i = 0; i < 2; i++) {

		printf("이름, 학번, 점수 입력");
		scanf("%s %d %d %d", s[i].name[i], );
	}*/

	/// 선언과 동시에 입력 ///                                     //?
	/*struct student2 s;

	printf("학번 이름 점수 석차를 입력하시오: ");

	s.name = (char * )malloc(20);   // 메모리 확보
	scanf("%d %s %f %d", &s.num, s.name, &s.score, &s.rank); // 포인터 변수에는 데이터를 직접 넣을 수 없다.

	printf("학번: %d, 이름: %s, 점수: %f, 등수: %d\n", s.num, s.name, s.score, s.rank);*/
	

	/// main에서 이름 국 영 수를 입력 받고 출력	///
	/*struct student s;
	printf("이름, 국어, 영어, 수학 입력: ");
	scanf("%s %d %d %d", s.name, &s.kor, &s.eng, &s.mat);

	printf("이름: %s, 국어: %d, 영어: %d, 수학: %d\n", s.name, s.kor, s.eng, s.mat);*/

	/// main에서 이름 국 영 수를 입력 받고 출력(5명 버전) ///   3가지 방법
	//struct student s[5];
	//for(int i = 0; i < 5; i++) {
	//	printf("이름, 국어, 영어, 수학 입력: ");
	//	scanf("%s %d %d %d", s[i].name, &s[i].kor, &s[i].eng, &s[i].mat);
	//	
	//}

	//for (int i = 0; i < 5; i++) {
	//	//printf("이름: %s, 국어: %d, 영어: %d, 수학: %d\n", s[i].name, s[i].kor, s[i].eng, s[i].mat);
	//	//score(s[i]);
	//}
	//score(s);
		
	/// 
	/*struct student3 s;
	struct student3 *sp = &s;
	sp -> no = 123456;
	strcpy_s((*sp).name,20,"나미");
	sp->score = 90.5;
	sp->rank = 1;

	printf("%d %s %f %d\n", sp->no, sp->name, sp->score, sp->rank);*/

	/// 구조체 포인터 배열 ///
	struct LIST list[3];
	struct LIST* p;

	p = list;

	for (int i = 0; i < 3; i++) {
		printf("이름 국 영 수 입력: ");

		scanf("%s", p ->name);
		scanf("%d%d%d", &p->kor, &p->eng, &p->mat);
		p->tot = p->kor + p->eng + p->mat;
		p->avg = p->tot / 3;
		p++;
	}
	
	printf("이름 국영수 총점\n");

	p--;
	p--;
	p--;

	for(int i = 0; i < 3; i++) {
		printf("%s %d %d %d %d\n", p[i].name, p[i].kor, p[i].eng, p[i].mat, p[i].tot);
	}








	return 0;
}