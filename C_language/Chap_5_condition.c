#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 5�� ���ǹ�

int main_5() {

	/////// 5�� ���ǹ�	///////
	/*int num;
	scanf_s("%d", &num);

	if (num > 100 || num < 0)
		printf("�Է� ���� ����");
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
		printf("�������");*/

	// 2�� if�� ���� ��� 
	/*int data, algo, base, hap;
	float mean;

	scanf_s("%d %d %d", &data, &algo, &base);

	hap = data + algo + base;

	mean = (float)hap / 3.0;

	printf("�� = %d\n", hap);
	printf("��� = %.2f\n", mean);

	if (data >= 40 && algo >= 40 && base >= 40) {
		if (mean > 100 || mean < 0) {
			printf("�Է� ���� ����");
		}
		else if (mean < 60) {
			printf("Ż��(����� 60�� �����Դϴ�.)");
		}
		else {
			printf("PASS");
		}
	}
	else {
		printf("Ż��(������ �ֽ��ϴ�.)");
	}*/

	// 2�� if�� ����
	/*int num;

	printf("������ �Է��ϼ���.\n");
	scanf_s("%d", &num);

	if (num > 0) {
		printf("%d�� ����Դϴ�.", num);
	}
	else if(num == 0){
		printf("%d�� 0�Դϴ�.", num);
	}
	else {
		printf("%d�� �����Դϴ�.", num);
		printf("������ %d�Դϴ�.", abs(num));
	}*/

	/*int n1, n2;

	printf("�� ������ �Է��ϼ���.\n");
	scanf_s("%d %d", &n1, &n2);

	if (n1 == 0 || n2 == 0) {
		printf("0�� ���� �Ǿ��ֽ��ϴ�\n");
	}
	else if (n1 > n2) {
		printf("%d�� %d���� Ů�ϴ�.\n", n1, n2);
		printf("�Ǽ�: %d / %d = %.2f\n", n1, n2, (float)n1 / n2);
		printf("����: %d / %d = %d\n", n1, n2, n1 / n2);
	}
	else {
		printf("%d�� %d���� Ů�ϴ�.\n", n2, n1);
		printf("�Ǽ�: %d / %d = %.2f\n", n2, n1, (float)n2 / n1);
		printf("����: %d / %d = %d\n", n2, n1, n2 / n1);
	}*/

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


	/// ������ ��� ��� ///
	//int k, e, m;
	//int mean;

	//printf("����, ����, ���� ������ �Է��Ͻÿ�\n");
	//scanf("%d %d %d", &k, &e, &m);

	//mean = (k + e + m) / 3;

	//printf("���: %d\n", mean);
	//
	//// if��
	//if (mean > 90) {
	//	printf("��!!\n");
	//}
	//else if (mean > 80) {
	//	//printf("��!!\n");
	//}
	//else if (mean > 70) {
	//	//printf("��!!\n");
	//}
	//else {
	//	//printf("�����!!\n");
	//}

	//// switch��
	//switch (mean / 10) {
	//	case 10: printf("��(100��)!!\n");
	//	break;
	//	case 9: printf("��!!\n");
	//	break;
	//	case 8: printf("��!!\n");
	//	break;
	//	case 7: printf("��!!\n");
	//	break;
	//	case 6: printf("�����!!\n");
	//	break;
	//}
}
