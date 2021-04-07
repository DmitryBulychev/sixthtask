#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int na, nb;
    int *pa = NULL;//Первый массив
    int *pb = NULL;//Второй массив
    srand(time(NULL));
    printf("na = ");
    scanf("%d", &na);
    printf("nb = ");
    scanf("%d", &nb);
    pa = (int *) calloc(na, sizeof(int));
    pb = (int *) malloc(nb * sizeof(int));
    for (int i = 0; i < na; i++) {
        pa[i] = rand() % 10;
    }
    for (int i = 0; i < nb; i++) {
        pb[i] = rand() % 10;
    }
    printf("Содержимое массивов:\n1:");
    for (int i = 0; i < na; i++) {
        printf("%d ", pa[i]);
    }
    printf("\n2:");
    for (int i = 0; i < nb; i++) {
        printf("%d ", pb[i]);
    }
    printf("\n");
    printf("Адреса в памяти массивов:\n1:");
    printf("%p", pa);
    printf("\n2:");
    printf("%p", pb);
    free(pa);
    free(pb);
    return 0;
}
