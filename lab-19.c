#include <stdlib.h>
#include <stdio.h>

int main()
{
        #define smin 1000
        #define smax 5000
        #define n 10
        #define m 12
        char *head[] = {"n", "jan.", "feb.", "mar.", "apr.", "may.", "jun.", "jul.", "aug.", "sen.", "oct.", "nov.", "dec.", "avg zar", "sum zar"};
        for (int l = 0; l < sizeof(head) / sizeof(head[0]); l++){
                printf("%s ", head[l]);
        }
        printf("\n");

        int sum1 = 0;
        for (int i = 0; i < n; i++){
        int sum = 0;
                printf("%d ", i + 1);
                for (int j = 0; j < m; j++){
                        int sal = rand() % (smax - smin + 1) + smin;
                        sum += sal;
                        sum1 += sal;
                        printf("%d ", sal);
                }
                float avg = (float) sum / 12;
                printf("%.2f ", avg);
                printf("%d\n", sum);
        }
        float avg_year = (float) sum1 / 120;
        printf("%s %d\n", "Summarnaya zarplata za god:", sum1);
        printf("%s %.2f\n", "Srednyaya zarplata po firme za god:", avg_year);
}
