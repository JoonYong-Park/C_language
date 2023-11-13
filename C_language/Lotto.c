#include <stdio.h>
#include <stdlib.h> // rand() �Լ��� ����ϱ� ���� ��� ����

int main_lotto() {
    
    int lotto[6] = { 1, 2, 3, 4, 5, 6 }; // ��÷ ��ȣ
    int bonus = 7;                       // ���ʽ� ��ȣ
    int numbers[6];                      // ���� ��ȣ
    int count = 0; 

    // ���� �Է�
    for (int i = 0; i < 6; i++) {
        numbers[i] = rand() % 45 + 1; // 1 ~ 45 ������ ���ڸ� �������� ����
    }

    // ��÷ ��ȣ�� ��
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (numbers[i] == lotto[j]) {
                count++;
                break;
            }
        }
    }

    // ��� ���
    printf("��û��ȣ: ");
    for (int i = 0; i < 6; i++) {
        printf("%2d ", lotto[i]);
    }
    printf("\n\n");
    printf("���ǹ�ȣ: ");
    for (int i = 0; i < 6; i++) {
        printf("%2d ", numbers[i]);
    }
    printf("\n\n");

    switch (count) {
    case 3:
        printf("5��\n");
        break;
    case 4:
        printf("4��\n");
        break;
    case 5:
        if (numbers[5] == bonus) {     // ���ʽ���ȣ�� ��
            printf("2��\n");
        }
        else {
            printf("3��\n");
        }
        break;
    case 6:
        printf("1��\n");
        break;
    default:                // 0, 1, 2�ΰ��
        printf("��!!\n");
        break;
    }

    return 0;
}
