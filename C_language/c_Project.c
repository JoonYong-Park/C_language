#include <stdio.h>
#include <conio.h>              // (_getch)화면에서 키 입력을 처리하기 위해 사용되는 헤더 파일

int main_c() {
    int choice = 0;             // 메뉴 선택을 저장하는 변수

    while (1) {                 // 무한 루프: 게임 메뉴를 계속 표시하고 사용자 입력을 처리합니다.
        system("cls");          // 화면을 지우고 메뉴를 다시 출력합니다. (Windows 환경에서 사용)

        printf("게임 메뉴\n");
        if (choice == 0) printf("-> 게임 시작\n"); // 현재 선택된 항목에 화살표 표시
        else printf("   게임 시작\n");

        if (choice == 1) printf("-> 게임 종료\n");
        else printf("   게임 종료\n");

        int key = _getch();                      // 키 입력을 받습니다. 사용자가 누른 키의 아스키 코드를 반환합니다.
       
        if (key == 224) {                        // 방향키 입력
            key = _getch();                      // 확장 키 입력을 다시 받습니다.
            if (key == 72 && choice > 0)         // UP 화살표 키를 누르고 현재 선택이 0보다 크면
                choice--;                        
            else if (key == 80 && choice < 1)    // DOWN 화살표 키를 누르고 현재 선택이 1보다 작으면
                choice++;                       
        }

        else if (key == 13) {                    // Enter키 입력 
            if (choice == 0) {
                printf("게임을 시작합니다!\n");
                // 게임 시작 로직을 추가하세요. 
                printf("!게임중입니다!");


            }
            else if (choice == 1) {
                printf("게임을 종료합니다.\n");

                return 0; // 프로그램 종료
            }
        }
    }

    return 0;
}
