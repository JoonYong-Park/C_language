#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main_po() {
    char name[][100] = { 0 };
    char num[][100] = { 0 };
    char SearchName[100];

    int i = 0;
    while (1) {
        printf("%d) �̸��� ��ȭ��ȣ�� �Է��Ͻÿ�: ", i + 1);
        scanf("%s", name[i]);

        if (strcmp(name[i], "END") == 0) break;

        scanf("%s", num[i]);

        i++;
    }

    while (1) {
        printf("ã�� �̸�:");
        scanf("%s", SearchName);

        for (int j = 0; j <= i + 1; j++)
        {
            if (strcmp(name[j], SearchName) == 0) {
                if (strcmp("END", SearchName) != 0) {
                    printf("%s�� ��ȭ��ȣ�� %s�Դϴ�.\n", name[j], num[j]);
                    break;
                }
            }
            else if (j == i+1) {
                printf("%s�� ��ȭ��ȣ�� �����ϴ�.\n", SearchName);
            }
        }

    }

    return 0;
}
