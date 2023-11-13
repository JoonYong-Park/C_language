#include <stdio.h>
#include <stdlib.h> // rand() 함수를 사용하기 위한 헤더 파일

int main_lotto() {
    
    int lotto[6] = { 1, 2, 3, 4, 5, 6 }; // 당첨 번호
    int bonus = 7;                       // 보너스 번호
    int numbers[6];                      // 나의 번호
    int count = 0; 

    // 숫자 입력
    for (int i = 0; i < 6; i++) {
        numbers[i] = rand() % 45 + 1; // 1 ~ 45 사이의 숫자를 랜덤으로 생성
    }

    // 당첨 번호와 비교
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (numbers[i] == lotto[j]) {
                count++;
                break;
            }
        }
    }

    // 결과 출력
    printf("담청번호: ");
    for (int i = 0; i < 6; i++) {
        printf("%2d ", lotto[i]);
    }
    printf("\n\n");
    printf("나의번호: ");
    for (int i = 0; i < 6; i++) {
        printf("%2d ", numbers[i]);
    }
    printf("\n\n");

    switch (count) {
    case 3:
        printf("5등\n");
        break;
    case 4:
        printf("4등\n");
        break;
    case 5:
        if (numbers[5] == bonus) {     // 보너스번호와 비교
            printf("2등\n");
        }
        else {
            printf("3등\n");
        }
        break;
    case 6:
        printf("1등\n");
        break;
    default:                // 0, 1, 2인경우
        printf("꽝!!\n");
        break;
    }

    return 0;
}
