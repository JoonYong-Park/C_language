#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 5�� ���ǹ�

int main() {
    /// 5���� �й��� ������ �Է¹޾� 1��� �õ��� ����ϴ� ���α׷� ///
    /*int num, data, algo, pro;
    float sum, mean;
    int max = -999, min = 999;

    for (int i = 0; i < 5; i++) {
        printf("�й�, �ڷᱸ��, �˰���, ���α׷��� ������ �Է��Ͻÿ�.\n");
        scanf_s("%d %d %d %d", &num, &data, &algo, &pro);
        sum = data + algo + pro;
        mean = sum / 3.0;
        if(max < mean) max = num;
        if(min > mean) min = num;

    }
    printf("1 ��: %d\n", max);
    printf("�õ�: %d\n", min);

    return 0;*/

    /// ����� ����� �����Ͻÿ� ///
    /*int year;

    printf("������ �Է��Ͻÿ�:");
    scanf_s("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
				printf("����");
                return 0;
            }
            printf("���");
            return 0;
        }
        printf("����");
    }
    else {
        printf("���");
    }*/

    /// ������ ��� ///
    /*int id, type, kw;
    float won;
    printf("���̵�, ����, �����뷮�� �Է��Ͻÿ�.\n");
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
    printf("����� ��ȣ: %d\n ����: %d\n ���: %.2f", id, type, won);*/

    /// �Է��� �빮��, �ҹ���, Ư������, �������� �Ǻ� ///
    /*char ch;
    
    printf("�Է��Ͻÿ�: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
		printf("�빮��");
	}
	else if (ch >= 'a' && ch <= 'z') {
		printf("�ҹ���");
	}
	else if (ch >= '0' && ch <= '9') {
		printf("����");
	}
	else {
		printf("Ư������");
	}*/

    /// 5�� �������� 7��
    /*int year, month, day;
    printf("��������� �Է��ϱ��(19990331)\n");
    scanf_s("%4d %2d %2d", &year, &month, &day);

    

    if (year % 12 == 0) {
		printf("�����̶�");
	}
	else if (year % 12 == 1) {
		printf("�߶�");
	}
	else if (year % 12 == 2) {
		printf("����");
	}
	else if (year % 12 == 3) {
		printf("������");
	}
	else if (year % 12 == 4) {
		printf("���");
	}
	else if (year % 12 == 5) {
		printf("�Ҷ�");
	}
	else if (year % 12 == 6) {
		printf("����");
	}
	else if (year % 12 == 7) {
		printf("�䳢��");
	}
	else if (year % 12 == 8) {
		printf("���");
	}
	else if (year % 12 == 9) {
		printf("���");
	}
	else if (year % 12 == 10) {
		printf("����");
	}
	else if (year % 12 == 11) {
		printf("���");
    }*/

    int y, m, d, x;

    char ani[12][13] = { "������","��", "��", "��","��","��","ȣ����","�䳢","��","��","��" };



    scanf_s("%d %d %d", &y, &m, &d);

    x = y % 12;



    printf("%d��� %s�� �Դϴ�.", y, ani[x]);

    // �������� ���α׷��� �� -p192 3��
    // 1. �˰���
    // 2. �����ڵ�
    // 3. C��� �ڵ�
    // �Է°� ��:��

    // �ȳ� ǥ���� Ǯ��(����ǥ)
    // �Ϸ� ����� 15000��
    // ����� 1���� 100000��
    // 

}
