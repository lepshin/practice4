#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 5

int main() {
    int mass[N][N];
    int k = 1;
    int pol= N/2;
    srand(time(NULL));
    for (int i = 0; i < N; i++){
        for (int j = 0; j<N;j++){
            mass[i][j]= rand()%10+1;
        }
    }


    printf("Изначальный вид массива:\n");//генерация изначального массива
    for (int i = 0; i < N; i++){
        for (int j = 0; j<N;j++){
            printf("%d\t ",mass[i][j]);
        }
            printf("\n");
    }


    printf("Вывод массива симметрично относительно вертикальной оси:\n");
    if(N%2==0)//условие для вывода массива относительно вертикальной оси
    {
        for (int i =0;i<N;i++){
            for (int j = 0; j<N;j++){
                if (j>=pol){
                    printf("%d\t",mass[i][pol-k]);
                    k++;}
                else printf("%d\t ",mass[i][j]);

            }
            k=1;
            printf("\n");}
    }

    else
    {
        for (int i =0;i<N;i++){
            for (int j = 0; j<N;j++){
                if (j>pol){
                    printf("%d\t",mass[i][pol-k]);
                    k++;}
                else printf("%d\t ",mass[i][j]);

            }
            k=1;
            printf("\n");}
    }
    return 0;
}