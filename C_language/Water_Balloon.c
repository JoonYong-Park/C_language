//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <conio.h>
////#include <unistd.h>
//
//#define SCREEN_WIDTH 80
//#define SCREEN_HEIGHT 25
//
//// �÷��̾�� ������ ����ü
//struct player {
//    int x;
//    int y;
//};
//struct villain {
//    int x;
//    int y;
//};
//
//// ������ �����ϴ� �Լ�
//void start_game() {
//    // �÷��̾�� ������ �ʱ�ȭ�Ѵ�.
//    struct player player = { .x = SCREEN_WIDTH / 2, .y = SCREEN_HEIGHT / 2 };
//    struct villain villain = { .x = rand() % SCREEN_WIDTH, .y = rand() % SCREEN_HEIGHT };
//
//    // ������ �ݺ��Ѵ�.
//    while (1) {
//        // �÷��̾��� ��ġ�� ȭ�鿡 ����Ѵ�.
//        printf("@ %d %d\n", player.x, player.y);
//
//        // ������ ��ġ�� ȭ�鿡 ����Ѵ�.
//        printf("# %d %d\n", villain.x, villain.y);
//
//        // Ű���� �Է��� Ȯ���Ѵ�.
//        int input = getch();
//
//        // ����Ű�� ������ �÷��̾ �̵��Ѵ�.
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
//        // �����̽��ٸ� ������ ��ǳ���� �����Ѵ�.
//        if (input == ' ') {
//            struct villain water_balloon = { .x = player.x, .y = player.y };
//
//            // ��ǳ���� ���� ������ �ݺ��Ѵ�.
//            while (1) {
//                // ��ǳ���� ��ġ�� ȭ�鿡 ����Ѵ�.
//                printf("* %d %d\n", water_balloon.x, water_balloon.y);
//
//                // ������ ��ǳ�� ���� �ȿ� �ִٸ� ������ �����Ѵ�.
//                if (water_balloon.x == villain.x && water_balloon.y == villain.y) {
//                    printf("������ ��ǳ������ �����߽��ϴ�!\n");
//                    villain.x = -1;
//                    villain.y = -1;
//                    break;
//                }
//
//                // 1�ʸ��� ��ǳ���� ��ġ�� �̵��Ѵ�.
//                water_balloon.x += 1;
//
//                // ��ǳ���� ȭ�� ������ ������ �����Ѵ�.
//                if (water_balloon.x >= SCREEN_WIDTH) {
//                    water_balloon.x = -1;
//                    water_balloon.y = -1;
//                    break;
//                }
//
//                // 1�� ���� ����Ѵ�.
//                sleep(1);
//            }
//        }
//
//        // ������ �÷��̾�� �浹�ϸ� ���� �����Ѵ�.
//        if (player.x == villain.x && player.y == villain.y) {
//            printf("���� ����!\n");
//            break;
//        }
//
//        // 1�� ���� ����Ѵ�.
//        sleep(1);
//    }
//}
//
//int main_water() {
//    // ������ �ʱ�ȭ�Ѵ�.
//    srand(time(NULL));
//
//    // ������ �����Ѵ�.
//    start_game();
//
//    return 0;
//}
