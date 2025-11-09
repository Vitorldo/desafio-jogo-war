#include<stdio.h>
#include<time.h>
#include<string.h>

struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

// Função para gerar um numero aleatório pela hora da jogada
//int gerarNumeroAleatorio(int min, int max) {
    //return (rand() % (max - min + 1)) + min;
//}


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
    //Exibe os 5 territórios cadastrados 
    printf("=========================================\n");
    printf("      MAPA DO MUNDO - ESTADO ATUAL       \n");
    printf("=========================================\n");
    //Loop de apresentacao de todos os territorios
    for (int i = 1; i<=5; i++) {
        printf("--- Territorio %d ---\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exercito: %s\n", territorios[i].cor);
        printf("Numero de Tropas: %d\n", territorios[i].tropas);
        printf("\n"); 
    }





    return 0;
}

