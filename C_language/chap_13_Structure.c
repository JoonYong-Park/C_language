#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>       // < > ���� �ִ��������
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
void score(struct student *s) {   // �����ʹ� �迭ó�� ��� �����ϴ�.
	for (int i = 0; i < 5; i++) {
		/*s[i].tot = s[i].kor + s[i].eng + s[i].mat;
		printf("�̸�: %s, ����: %d, ����: %d, ����: %d, ����: %d\n", s[i].name, s[i].kor, s[i].eng, s[i].mat, s[i].tot);*/
		s->tot = s->kor + s->eng + s->mat;
		printf("�̸�: %s, ����: %d, ����: %d, ����: %d, ����: %d\n", s->name, s->kor, s->eng, s->mat, s->tot);
		s++;
	}
}

int main() {
	/// ����ü �迭 ///
	/*struct student s[5];

	for(int i = 0; i < 5; i++) {
		printf("�̸�, ����, ����, ���� �Է�: ");
		scanf("%s %d %d %d", s[i].name, &s[i].kor, &s[i].eng, &s[i].mat);

		s[i].tot = s[i].kor + s[i].eng + s[i].mat;
	}

	for (int i = 0; i < 5; i++) {
		printf("�̸�: %s, ����: %d, ����: %d, ����: %d, ����: %d\n", s[i].name, s[i].kor, s[i].eng, s[i].mat, s[i].tot);
	}*/

	/// 5���� ����� �̸��� ��ȭ��ȣ�� �Է� �޾Ƽ� ����Ѵ�. ///
	/*struct phone p[5];
	for (int i = 0; i < 5; i++) {
		printf("�̸�, ��ȭ��ȣ �Է�: ");
		scanf("%s %s", p[i].name, p[i].tel);
	}
	printf("�̸�\t��ȭ��ȣ\n====================\n");
	for (int i = 0; i < 5; i++) {
		printf("%s\t%s\n", p[i].name, p[i].tel);
	}*/

	/// ����� ���� ppt
	/*char name[2][15];
	int stu[2][2];
	
	struct student s[2];

	for (int i = 0; i < 2; i++) {

		printf("�̸�, �й�, ���� �Է�");
		scanf("%s %d %d %d", s[i].name[i], );
	}*/

	/// ����� ���ÿ� �Է� ///                                     //?
	/*struct student2 s;

	printf("�й� �̸� ���� ������ �Է��Ͻÿ�: ");

	s.name = (char * )malloc(20);   // �޸� Ȯ��
	scanf("%d %s %f %d", &s.num, s.name, &s.score, &s.rank); // ������ �������� �����͸� ���� ���� �� ����.

	printf("�й�: %d, �̸�: %s, ����: %f, ���: %d\n", s.num, s.name, s.score, s.rank);*/
	

	/// main���� �̸� �� �� ���� �Է� �ް� ���	///
	/*struct student s;
	printf("�̸�, ����, ����, ���� �Է�: ");
	scanf("%s %d %d %d", s.name, &s.kor, &s.eng, &s.mat);

	printf("�̸�: %s, ����: %d, ����: %d, ����: %d\n", s.name, s.kor, s.eng, s.mat);*/

	/// main���� �̸� �� �� ���� �Է� �ް� ���(5�� ����) ///   3���� ���
	//struct student s[5];
	//for(int i = 0; i < 5; i++) {
	//	printf("�̸�, ����, ����, ���� �Է�: ");
	//	scanf("%s %d %d %d", s[i].name, &s[i].kor, &s[i].eng, &s[i].mat);
	//	
	//}

	//for (int i = 0; i < 5; i++) {
	//	//printf("�̸�: %s, ����: %d, ����: %d, ����: %d\n", s[i].name, s[i].kor, s[i].eng, s[i].mat);
	//	//score(s[i]);
	//}
	//score(s);
		
	/// 
	/*struct student3 s;
	struct student3 *sp = &s;
	sp -> no = 123456;
	strcpy_s((*sp).name,20,"����");
	sp->score = 90.5;
	sp->rank = 1;

	printf("%d %s %f %d\n", sp->no, sp->name, sp->score, sp->rank);*/

	/// ����ü ������ �迭 ///
	struct LIST list[3];
	struct LIST* p;

	p = list;

	for (int i = 0; i < 3; i++) {
		printf("�̸� �� �� �� �Է�: ");

		scanf("%s", p ->name);
		scanf("%d%d%d", &p->kor, &p->eng, &p->mat);
		p->tot = p->kor + p->eng + p->mat;
		p->avg = p->tot / 3;
		p++;
	}
	
	printf("�̸� ������ ����\n");

	p--;
	p--;
	p--;

	for(int i = 0; i < 3; i++) {
		printf("%s %d %d %d %d\n", p[i].name, p[i].kor, p[i].eng, p[i].mat, p[i].tot);
	}








	return 0;
}