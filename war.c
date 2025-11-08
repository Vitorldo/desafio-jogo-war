#include<stdio.h>

struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

struct Territorio territorios[5];

int main()
{
    // Criacao do Menu
    printf("=============================\n\n");
    printf("Vamos cadastrar os 5 territorios iniciais do nosso mundo.\n");
    for (int i = 1; i<=5; i++) {
        printf("\n--- Cadastrando Territorio %d ---\n", i);
        printf("Nome do Territorio: ");
        scanf("%s", territorios[i-1].nome);
        printf("Cor do Exercito: ");
        scanf("%s", territorios[i-1].cor);
        printf("Numero de Tropas: ");
        scanf("%d", &territorios[i-1].tropas);
    }
    return 0;
}
