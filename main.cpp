#include <iostream>
#include <stdlib.h>
int main() {
    int na, nb;
    int A1[na];//Первый массив
    int B1[nb];//Второй массив
    int *pa = NULL;
    int *pb = NULL;
    printf("na, nb = ");
    scanf("%d", &na);
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
