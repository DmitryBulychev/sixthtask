#include <stdio.h>
#include <stdlib.h>
int main() {
           int na, nb;
           int* pa = NULL;//Первый массив
           int* pb = NULL;//Второй массив
           printf("na, nb = ");
           scanf ("%d", &na);//Вводим 100
           scanf ("%d", &nb);//Вводим 100
           pa = (int*)calloc(na, sizeof(int));
           pb = (int*)malloc(nb*sizeof(int));
           for (int i = 0; i < na; i++) {
               pa[i] = rand() % 10;
           }
           for (int i = 0; i < nb; i++) {
               pb[i] = rand() % 10;
           }
           free(pa);
           free(pb);
    return 0;
}
