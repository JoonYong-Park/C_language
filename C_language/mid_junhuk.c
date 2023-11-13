#include <stdio.h>


int main_jun(void)
{
    int arr[13] = { 2101560, 2002250, 2204650, 2110940, 2308550,
                    2230790, 2001500, 2303790, 2240450, 2312660,
                    2010477, 2203350, 2250280 };

    //int size = sizeof(arr) / sizeof(arr[0]);
    int size = 13;
    int haknum[13];
    int jum[13];

    for (int i = 0; i < size; i++)
    {
        haknum[i] = arr[i] / 100000;
        jum[i] = arr[i] % 1000;

    }

    int unCount = 0;
    int checked[13] = { 0 }; // 0으로 초기화

    int avg[13];
    int sum[13] = { 0 };

    for (int i = 0; i < size; i++)
    {
        if (!checked[i]) // 0 또는 1의 값을 체크
        {
            int value = haknum[i];
            sum[i] += jum[i];
            int countValue = 1;


            for (int j = i + 1; j < size; j++)
            {
                if (haknum[j] == value)

                {

                    sum[i] += jum[j];

                    checked[j] = 1;

                    countValue++;

                }

            }



            if (countValue > 0)

            {

                avg[i] = sum[i] / countValue;

                printf("%3d || ", value);



                for (int k = 0; k < countValue; k++)
                {
                    printf("*");

                }

                printf("\t\t ");



                printf("%3d\n", avg[i]);

            }

        }

    }



    printf("==============================\n");

}

