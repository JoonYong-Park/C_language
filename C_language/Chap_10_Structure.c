#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>       // < > ���� �ִ��������
#include <stdlib.h>      // malloc()
#include <string.h> // strlen() �Լ��� ����ϱ� ���� �ʿ��ϴ�.

// �Ǳ� ���� �ϳ�
// ����ü ������ ����
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
	char *name;        // ������ ����
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

//void prt(struct LIST *s) {   // �����ʹ� �迭ó�� ��� �����ϴ�.
void prt2(struct LIST s[2]) {
	for (int i = 0; i < 2; i++) {
		// ������ ����
		/*s->tot = s->kor + s->eng + s->mat;
		printf("�̸�: %s, ����: %d, ����: %d, ����: %d, ����: %d\n", 
			s->name, s->kor, s->eng, s->mat, s->tot);
		s++;*/

		// �迭 ����
		s[i].tot = s[i].kor + s[i].eng + s[i].mat;
		printf("�̸�: %s, ����: %d, ����: %d, ����: %d, ����: %d\n", 
			s[i].name, s[i].kor, s[i].eng, s[i].mat, s[i].tot);

	}
}

/// ��������� + ����ü ///
void in(int* n1, char* na1, float* sc1, int* ra1) {
	int n, ra;
	char na[20];
	int sc;
	printf("�й� �̸� ���� ������ �Է��ϼ���!!!!!!!!!!!! :");
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

	printf("�й� �̸� ���� ������ �Է��ϼ���!!!!!!!!!!!! :");
	scanf("%d %s %f %d", &n, na, &sc, &ra);
	//printf("%d %s %f %d\n", n, na, sc, ra);

	s->no = n;
	strcpy(s->name, na);
	s->score = sc;
	s->rank = ra;

}

////////////////////////////////�⸻ ��� ���� ����	///////////////////////////////
struct employee {
	int no;
	char name[20];
	char dept[20];
	int pay;
};

void print(struct employee *s) {
	for(int i = 0; i < 5; i++) {
		printf("[���: %d | �̸�: %s | �μ�: %s | �޿�: %d]\n", s[i].no, s[i].name, s[i].dept, s[i].pay);
	}
}
void name_search(struct employee*s) {
	char na[20];
	int i;
	printf("�˻��� �̸��� �Է��ϼ��� :");
	scanf("%s", na);

	for(i = 0; i < 5; i++) {
		if (strcmp(s[i].name, na) == 0) {
			printf("[���: %d | �̸�: %s | �μ�: %s | �޿�: %d]\n", s[i].no, s[i].name, s[i].dept, s[i].pay);
			break;
		}
	}
	if (i == 5) {
		printf("�˻��� �̸��� �����ϴ�.\n");
	}
}
void dept_search(struct employee*s) {
	char dept[20];
	int i;
	printf("�˻��� �μ��� �Է��ϼ��� :");
	scanf("%s", dept);
	for( i = 0; i < 5; i++) {
		if (strcmp(s[i].dept, dept) == 0) {
			printf("[���: %d | �̸�: %s | �μ�: %s | �޿�: %d]\n", s[i].no, s[i].name, s[i].dept, s[i].pay);
			break;
		}
	}
	if(i == 5) {
		printf("�˻��� �μ��� �����ϴ�.\n");
	}
}
void total_pay(struct employee*s) {
	int tot = 0;
	for (int i = 0; i < 5; i++) {
		tot += s[i].pay;
	}
	printf("�ѱ޿� : %d\n", tot);
}



int main_10() {
	/// ����ü �迭 ///
	/*struct student1 s[5];

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

	/// ����� ���� ppt ///
	/*struct student s[2];

	for (int i = 0; i < 2; i++) {
		printf("�̸�, �й�, ���� �Է�: ");
		scanf("%s %d %d", s[i].name, s[i].no, s[i].score);
	}*/

	/// ����� ���ÿ� �Է�(�����Ҵ� ���) ///                                     // (char*)malloc(20)
	/*struct student2 s;

	printf("�й� �̸� ���� ������ �Է��Ͻÿ�: ");

	s.name = (char * )malloc(20);   // �޸� Ȯ��
	scanf("%d %s %f %d", &s.num, s.name, &s.score, &s.rank); // ������ �������� �����͸� ���� ���� �� ����.

	printf("�й�: %d, �̸�: %s, ����: %f, ���: %d\n", s.num, s.name, s.score, s.rank);
	*/

	/// main���� �̸� �� �� ���� �Է� �ް� ���	///
	/*struct student1 s;
	printf("�̸�, ����, ����, ���� �Է�: ");
	scanf("%s %d %d %d", s.name, &s.kor, &s.eng, &s.mat);

	printf("�̸�: %s, ����: %d, ����: %d, ����: %d\n", s.name, s.kor, s.eng, s.mat);*/

	/// main���� �̸� �� �� ���� �Է� �ް� ���(5�� ����) ///   3���� ���
	/*struct LIST s[2];
	for(int i = 0; i < 2; i++) {
		printf("�̸�, ����, ����, ���� �Է�: ");
		scanf("%s %d %d %d", &s[i].name, &s[i].kor, &s[i].eng, &s[i].mat);
		
	}

	for (int i = 0; i < 2; i++) {
		//printf("�̸�: %s, ����: %d, ����: %d, ����: %d\n", s[i].name, s[i].kor, s[i].eng, s[i].mat);
	}
	prt(s);*/
		
	/// -> ������ ///  
	/*struct student3 s;
	struct student3 *sp = &s;

	sp -> no = 123456;
	strcpy_s((*sp).name,20, "����");
	sp->score = 90.5;
	sp->rank = 1;

	printf("%d %s %f %d\n", sp->no, sp->name, sp->score, sp->rank);*/

	/// ����ü ������ �迭 ///
	/*struct LIST list[3];
	struct LIST* p;

	p = list;

	for (int i = 0; i < 3; i++) {
		printf("�̸� �� �� �� �Է�: ");

		scanf("%s ", p ->name);
		scanf("%d %d %d", &p->kor, &p->eng, &p->mat);

		p->tot = p->kor + p->eng + p->mat;
		p->avg = p->tot / 3;

		p++;
	}
	

	p--;
	p--;
	p--;

	// ���
	printf("�̸� �� �� �� ����\n");
	for(int i = 0; i < 3; i++) {
	  //printf("%s %d %d %d %d\n", p[i].name, p[i].kor, p[i].eng, p[i].mat, p[i].tot);
		printf("%3s %2d %2d %2d %2d\n", p->name, p->kor, p->eng, p->mat, p->tot);
		p++;
	}*/

	/// ��������� + ����ü ///
	/*struct student s;
	struct student *x = &s;
	
	//in(&s.no, s.name, &s.score, &s.rank);
	in2(x); 

	printf("�й�  �̸�  ����  ����\n");
	//printf("%d %s %d %d\n", s.no, s.name, s.score, s.rank);
	printf("%d %s %d %d\n", x->no, x->name, x->score, x->rank);*/


	/// ����ü ������(�⸻ ��� ����) ///
	struct employee ss[5] = { {1001,"���ؿ�","�ѹ�",3000},
		 					  {1002,"������","����",3500},
	 						  {1003,"��ȣ��","��ȹ",3200},
 							  {1004,"������","����",3700},
							  {1005,"���ֿ�","�ѹ�",3300} };

	int cho;
	while (1) {
		printf("\n================================================================\n");
		printf("1.��ü��� 2.�̸��˻� 3.�μ����˻� 4.�ѱ޿� 5.ȭ�� ����� 6.����\n����:");
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