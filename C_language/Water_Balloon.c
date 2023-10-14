//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <conio.h>
////#include <unistd.h>
//
//#define SCREEN_WIDTH 80
//#define SCREEN_HEIGHT 25
//
//// 플레이어와 빌런의 구조체
//struct player {
//    int x;
//    int y;
//};
//struct villain {
//    int x;
//    int y;
//};
//
//// 게임을 시작하는 함수
//void start_game() {
//    // 플레이어와 빌런을 초기화한다.
//    struct player player = { .x = SCREEN_WIDTH / 2, .y = SCREEN_HEIGHT / 2 };
//    struct villain villain = { .x = rand() % SCREEN_WIDTH, .y = rand() % SCREEN_HEIGHT };
//
//    // 게임을 반복한다.
//    while (1) {
//        // 플레이어의 위치를 화면에 출력한다.
//        printf("@ %d %d\n", player.x, player.y);
//
//        // 빌런의 위치를 화면에 출력한다.
//        printf("# %d %d\n", villain.x, villain.y);
//
//        // 키보드 입력을 확인한다.
//        int input = getch();
//
//        // 방향키를 누르면 플레이어를 이동한다.
//        if (input == 'a') {
//            player.x -= 1;
//        }
//        else if (input == 'd') {
//            player.x += 1;
//        }
//        else if (input == 'w') {
//            player.y -= 1;
//        }
//        else if (input == 's') {
//            player.y += 1;
//        }
//
//        // 스페이스바를 누르면 물풍선을 생성한다.
//        if (input == ' ') {
//            struct villain water_balloon = { .x = player.x, .y = player.y };
//
//            // 물풍선이 터질 때까지 반복한다.
//            while (1) {
//                // 물풍선의 위치를 화면에 출력한다.
//                printf("* %d %d\n", water_balloon.x, water_balloon.y);
//
//                // 빌런이 물풍선 범위 안에 있다면 빌런을 제거한다.
//                if (water_balloon.x == villain.x && water_balloon.y == villain.y) {
//                    printf("빌런을 물풍선으로 제거했습니다!\n");
//                    villain.x = -1;
//                    villain.y = -1;
//                    break;
//                }
//
//                // 1초마다 물풍선의 위치를 이동한다.
//                water_balloon.x += 1;
//
//                // 물풍선이 화면 밖으로 나가면 제거한다.
//                if (water_balloon.x >= SCREEN_WIDTH) {
//                    water_balloon.x = -1;
//                    water_balloon.y = -1;
//                    break;
//                }
//
//                // 1초 동안 대기한다.
//                sleep(1);
//            }
//        }
//
//        // 빌런이 플레이어와 충돌하면 게임 오버한다.
//        if (player.x == villain.x && player.y == villain.y) {
//            printf("게임 오버!\n");
//            break;
//        }
//
//        // 1초 동안 대기한다.
//        sleep(1);
//    }
//}
//
//int main_water() {
//    // 난수를 초기화한다.
//    srand(time(NULL));
//
//    // 게임을 시작한다.
//    start_game();
//
//    return 0;
//}
