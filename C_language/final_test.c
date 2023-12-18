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
	printf("�ܿ� ���Ǽ�: %d\n", cnt);
}
void cancel(struct hotel *p) {
	char name[20];
	printf("����� �̸��� �Է��ϼ���\n");
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
	printf("1. ���ǰ˻� 2. ��ȭ��ȣ �˻� 0. ���θ޴�\n");
	printf("========================================\n");
	printf("��ȣ�� �Է��ϼ���\n");
	scanf("%d", &cho2);

	switch (cho2)
	{
	case 1:
		printf("�˻��� �̸��� �Է��ϼ���\n");
		scanf("%s", name);
		for (int i = 0; i < 8; i++) {
			if (strcmp(p->gan, name)== 0) {
				printf("%s %d %d %s %d\n", p->gan, p->myung, p->day, p->name, p->num);
			}
			p++;
		}
		break;
	case 2:
		printf("�˻��� ��ȭ��ȣ�� �Է��ϼ���\n");
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
// ���
void tong(struct hotel* p) {
	int cho3;

	int han = 0;
	int song = 0;
	int won = 0;


	for (int i = 0; i < 8; i++) {
		if (strcmp(p->gan, "�۹��") == 0) {
			han++;
		}
		else if (strcmp(p->gan, "�Ѵ�����") == 0) {
			song++;
		}
		won += p->price;


		p++;
	}
	printf("1. ����� �� �Ǽ� 2. ��ü�ݾ� 3. ���θ޴�\n");
	scanf("%d", &cho3);
	switch (cho3)
	{
		case 1:
			printf("�۹��: %d��\n", han);
			printf("�Ѵ�����: %d��\n", song);
			break;
		case 2:
			printf("��ü �ݾ� %d��\n", won);
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


		struct hotel s[8] = { {"�۹��",   2, 1, "������", 0101111, 120000},
							 {"�۹��",   2, 1, "ȫ�浿", 0102222, 100000},
							 {"�۹��",   3, 1, "�����", 0101113, 120000},
							 {"�Ѵ�����", 1, 1, "�չ̼�", 0101114, 100000},
							 {"�۹��",   2, 1, "�̰���", 0101115, 120000},
							 {"�Ѵ�����", 4, 1, "Ȳ�ͼ�", 0101116, 160000},
							 {"�۹��",   2, 1, "�̰���", 0101117, 100000},
							 {"�Ѵ�����", 1, 1, "������", 0101110, 100000} };
		struct hotel* p = s;

		printf("\n===========================================================\n");
		printf("1. ���ฮ��Ʈ��� 2. ���డ�ɰ��Ǽ� 3. �˻� 4. ��� 5. ���\n");
		printf("===========================================================\n");
		printf("��ȣ�� �Է��ϼ���: ");
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
			printf("�߸��Է��ϼ̽��ϴ�.\n");
			break;
		}

	}

	return 0;
}