#include <stdio.h>
#include <conio.h>              // (_getch)ȭ�鿡�� Ű �Է��� ó���ϱ� ���� ���Ǵ� ��� ����

int main_c() {
    int choice = 0;             // �޴� ������ �����ϴ� ����

    while (1) {                 // ���� ����: ���� �޴��� ��� ǥ���ϰ� ����� �Է��� ó���մϴ�.
        system("cls");          // ȭ���� ����� �޴��� �ٽ� ����մϴ�. (Windows ȯ�濡�� ���)

        printf("���� �޴�\n");
        if (choice == 0) printf("-> ���� ����\n"); // ���� ���õ� �׸� ȭ��ǥ ǥ��
        else printf("   ���� ����\n");

        if (choice == 1) printf("-> ���� ����\n");
        else printf("   ���� ����\n");

        int key = _getch();                      // Ű �Է��� �޽��ϴ�. ����ڰ� ���� Ű�� �ƽ�Ű �ڵ带 ��ȯ�մϴ�.
       
        if (key == 224) {                        // ����Ű �Է�
            key = _getch();                      // Ȯ�� Ű �Է��� �ٽ� �޽��ϴ�.
            if (key == 72 && choice > 0)         // UP ȭ��ǥ Ű�� ������ ���� ������ 0���� ũ��
                choice--;                        
            else if (key == 80 && choice < 1)    // DOWN ȭ��ǥ Ű�� ������ ���� ������ 1���� ������
                choice++;                       
        }

        else if (key == 13) {                    // EnterŰ �Է� 
            if (choice == 0) {
                printf("������ �����մϴ�!\n");
                // ���� ���� ������ �߰��ϼ���. 
                printf("!�������Դϴ�!");


            }
            else if (choice == 1) {
                printf("������ �����մϴ�.\n");

                return 0; // ���α׷� ����
            }
        }
    }

    return 0;
}
