#include<stdio.h>
#include<string.h>

struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

struct Territorio territorios[5];

int main()
{
    strcpy(territorios[0].nome, "America");
    strcpy(territorios[0].cor, "Azul");
    territorios[0].tropas = 3;
    printf("%s\n", territorios[0].nome);

    territorios[1] = (struct Territorio){"Oceania", "Amarelo", 5};
    printf("%s\n", territorios[1].nome);
    
    return 0;
}
