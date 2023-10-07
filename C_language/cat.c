// JUMPING CAT 취미 제작.
// Created by chanhhh

#include <time.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <Windows.h>

#define CHARACTER_BOTTOM_Y    12        // 고양이 바닥값 설정
#define BARRICADE_BOTTOM_X    45        // 장애물 X축 값 설정
#define BARRICADE_BOTTOM_Y    25        // 장애물 Y축 값 설정
#define HEART_BOTTOM_X    45            // 하트 X축 값 설정
#define HEART_BOTTOM_Y    25            // 하트 Y축 값 설정

static bool heartHead = false;        // 하트를 먹었을때 고양이 반응 설정

//system 함수를 사용해 cmd창의 cols와 lines를 설정합니다.
//title의 이름또한 변경 가능.
//자세한 내용은 https://chanhhh.tistory.com/5
void setConsoleView()
{
    system("mode con:cols=140 lines=35");
    system("title Jumping Cat ~. By Chanhhh");
}

//색상 넣기. setColor https://chanhhh.tistory.com/8
void setColor(int color, int bgcolor)
{
    color &= 0xf;
    bgcolor &= 0xf;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
        (bgcolor << 4) | color);
}

// 좌표 이동
void cursorXY(int x, int y)
{
    COORD pos;
    pos.X = 2 * x;        // x좌표는 y좌표 값의 2배. 
    pos.Y = y;            // "ab = ㄱ" 과 같은 바이트를 차지 하기 때문 x:y = 1:2 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

//_kbhit를 사용하여 키가 눌렸는지 확인 할 수 있습니다.
int getKeyDown()
{
    if (_kbhit() != 0)
    {
        return _getch();
    }
    return 0;
}

//고양이를 그려줍니다. Interface 단계.
void drawCH(int chY)
{
    setColor(15, 0);
    cursorXY(0, chY);
    static bool movingLeg = true;    // 다리가 움직이는것도 만들어 줍니다.
    if (movingLeg)
    {
        printf("     ______             \n");
        printf("    ________            \n");
        printf("   __      __           \n");
        printf("  __        _           \n");
    }
    else
    {
        printf("       _____            \n");
        printf("     __________         \n");
        printf("   __         __        \n");
        printf("  __                    \n");
    }
    if (heartHead)                // 하트를 획득하였을때 반응입니다.
    {
        setColor(15, 0);
        printf("  __             "); setColor(12, 0); printf("♥\n");
        setColor(15, 0);
        printf("  __             "); setColor(12, 0); printf("  ♥\n");
        setColor(15, 0);
        printf("  __         __     _   \n");
        heartHead = false;
    }
    else
    {
        printf("  __                 \n");
        printf("  __               \n");
        printf("  __         __     _   \n");
    }
    printf("   ___       __ __ __   \n");
    printf("   _________ ________   \n");
    printf("    ________ __ ___ _   \n");
    printf("   _________ __ ___ _   \n");
    printf("   _________ ________   \n");
    printf("   __________ ______    \n");
    printf("   ____  __________     \n");
    printf("   ___   _________      \n");
    if (movingLeg)
    {
        printf("   ___    ___  ___      \n");
        printf("   ___    ___  ___      \n");
        printf("   __     __   ___      \n");
        printf("   __     __   ___      \n");
        printf("   __     __   __       \n");
        movingLeg = false;
    }
    else
    {
        printf("   ___    ___   ___     \n");
        printf("   ___    ___   ___     \n");
        printf("   __    __     ___     \n");
        printf("  __     __     ___     \n");
        printf("  __     __     __      \n");
        movingLeg = true;
    }
}

// 장애물을 그려줍니다
void drawBarricade(int BarricadeX)
{
    setColor(14, 0);
    cursorXY(BarricadeX, BARRICADE_BOTTOM_Y);
    printf("XX");
    cursorXY(BarricadeX, BARRICADE_BOTTOM_Y + 1);
    printf("XXXX");
    cursorXY(BarricadeX, BARRICADE_BOTTOM_Y + 2);
    printf("XX  XXXX");
    cursorXY(BarricadeX, BARRICADE_BOTTOM_Y + 3);
    printf("XX  XX  XXXX");
    cursorXY(BarricadeX, BARRICADE_BOTTOM_Y + 4);
    printf("X   XX   XX  XXX");
    cursorXY(BarricadeX, BARRICADE_BOTTOM_Y + 5);
    printf("X   X    XX   XX");
    cursorXY(BarricadeX, BARRICADE_BOTTOM_Y + 6);
    printf("    X    X    X");
    cursorXY(BarricadeX, BARRICADE_BOTTOM_Y + 7);
    printf("         X    X");
    cursorXY(BarricadeX, BARRICADE_BOTTOM_Y + 8);
    printf("              X");
}
// 하트를 그려줍니다
void drawHeart(int HeartX)
{
    setColor(12, 0);
    cursorXY(HeartX, HEART_BOTTOM_Y);
    printf("  XXX        XXXX");
    cursorXY(HeartX, HEART_BOTTOM_Y + 1);
    printf("XXXXXXX    XXXXXXXX");
    cursorXY(HeartX, HEART_BOTTOM_Y + 2);
    printf("XXXXXXXXXXXXXXXXXXX");
    cursorXY(HeartX, HEART_BOTTOM_Y + 3);
    printf("  XXXXXXXXXXXXXXX");
    cursorXY(HeartX, HEART_BOTTOM_Y + 4);
    printf("    XXXXXXXXXXX");
    cursorXY(HeartX, HEART_BOTTOM_Y + 5);
    printf("      XXXXXXX");
    cursorXY(HeartX, HEART_BOTTOM_Y + 6);
    printf("        XXX");
    cursorXY(HeartX, HEART_BOTTOM_Y + 7);
    printf("         X");
}
// 장애물을 넘지 못하였을때의 게임오버 입니다.
void drawGameOver(const int score)
{
    setColor(15, 0);

    system("cls");
    int x = 18;
    int y = 8;

    cursorXY(x, y);
    printf("============== Game Over. ==============");
    cursorXY(x, y + 1);
    printf("========== THNK U FOR PLAYING ==========");
    cursorXY(x, y + 2);
    printf("============== Cheer UP! ===============");
    cursorXY(x, y + 5);

    printf("SCORE : %d", score);

    printf("\n\n\n\n\n\n\n\n\n\n");
    system("pause");
}

// 장애물의 충돌효과 구별 기능입니다.
bool isCollision(const int BarricadeX, const int chY)
{
    cursorXY(0, 0);

    setColor(7, 0);

    printf("BarricadeX : %d, chY : %d\r\n", BarricadeX, chY);
    printf("Jumping Key : Z");

    if (BarricadeX <= 8 && BarricadeX >= 4 &&
        chY > 8)
    {
        return true;
    }
    return false;
}

// 하트의 충돌효과 입니다.
bool isHeartCollision(const int HeartX, const int chY)
{
    cursorXY(0, 0);
    printf("HeartX : %d, chY : %d", HeartX, chY);
    if (HeartX <= 8 && HeartX >= 4 &&
        chY > 8)
    {
        return true;
    }
    return false;
}

// 오프닝 이벤트 입니다.
int openingEvent(void)
{
    bool tik = true;
    srand((unsigned int)time(NULL));
    while (1)
    {
        if (tik)
        {
            cursorXY((rand() % 300) / 2, rand() % 40);
            printf("*");
            Sleep(100);
            tik = false;
        }
        else
        {
            cursorXY(27, 23);
            printf("play the game ? press ENTER key ");
            if (getKeyDown() == 13) { break; }
            tik = true;
        }
    }
}

//메인 함수입니다.
int main_cat()
{
    setConsoleView();

    openingEvent();

    while (true)
    {
        bool isJumping = false;
        bool isBottom = true;
        bool isBarricate = true;

        const int gravity = 3;

        int chY = CHARACTER_BOTTOM_Y;
        int BarricadeX = BARRICADE_BOTTOM_X;
        int HeartX = HEART_BOTTOM_X;
        int score = 0;
        clock_t start, curr;
        start = clock();

        while (true)
        {
            if (isCollision(BarricadeX, chY))
                break;
            if (isCollision(HeartX, chY))
            {
                heartHead = true;
                score += 10;
            }
            if (getKeyDown() == 'z' && isBottom)
            {
                isJumping = true;
                isBottom = false;
            }

            if (isJumping)
            {
                chY -= gravity;
            }
            else
            {
                chY += gravity;
            }

            if (chY >= CHARACTER_BOTTOM_Y)
            {
                chY = CHARACTER_BOTTOM_Y;
                isBottom = true;
            }
            if (isBarricate)
            {
                BarricadeX -= 2;
            }
            else
            {
                HeartX -= 2;
            }

            if (BarricadeX <= 0)
            {
                BarricadeX = BARRICADE_BOTTOM_X;
                heartHead = false;
                isBarricate = false;
            }
            if (HeartX <= 5)
            {
                HeartX = HEART_BOTTOM_X;
                isBarricate = true;
            }
            if (chY <= 3)
            {
                isJumping = false;
            }

            drawCH(chY);

            if (isBarricate) {
                drawBarricade(BarricadeX);
            }
            else {
                drawHeart(HeartX);
            }

            curr = clock();
            if (((curr - start) / CLOCKS_PER_SEC) >= 1)
            {
                score++;
                start = clock();
            }
            Sleep(60);
            system("cls");

            setColor(15, 0);
            cursorXY(22, 0);
            printf("Score : %d ", score);
        }
        drawGameOver(score);

    }
    system("pause");
    return 0;
}
