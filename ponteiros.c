#include<stdio.h>
#include<stdlib.h>


int main()
{
    int v[3];
    v[0] = 10;
    v[1] = 22;
    v[2] = 31;

    printf("%zu\n", sizeof(v));

    for (int i = 0; i < 3; i++)
        printf("%d\n", v[i]);

    printf("com ponteiros\n\n");

    int *t;

    t = malloc(3 * sizeof(int));

    t[0] = 1;
    t[1] = 2;
    t[2] = 3;

    printf("tamanho ponteiro %zu\n", sizeof(t));
    for (int i = 0; i < 3; i++)
        printf("%d\n", t[i]);
    

    return 0;
}