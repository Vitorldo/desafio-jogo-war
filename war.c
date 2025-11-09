#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>

struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int numTerritorio = 5;

int main()
{
    //Alocando memória e criando um ponteiro
    struct Territorio* t=(struct Territorio*)malloc(sizeof(struct Territorio));
    if (t==NULL) return 1;

    // Criacao do Menu
    printf("=============================\n\n");
    printf("Vamos cadastrar os 5 territorios iniciais do nosso mundo.\n");
    for (int i = 1; i <= numTerritorio; i++) {
        printf("\n--- Cadastrando Territorio %d ---\n", i);
        printf("Nome do Territorio: ");
        scanf("%s", t[i-1].nome);
        printf("Cor do Exercito: ");
        scanf("%s", t[i-1].cor);
        printf("Numero de Tropas: ");
        scanf("%d", &t[i-1].tropas);
        
    }
    //Exibe os 5 territórios cadastrados 
    printf("=========================================\n");
    printf("      MAPA DO MUNDO - ESTADO ATUAL       \n");
    printf("=========================================\n");
    //Loop de apresentacao de todos os territorios
        for (int i = 1; i< numTerritorio; i++) {
            printf("%d. ", i );
            printf("%s", t[i-1].nome);
            printf(" (Exército %s,", t[i-1].cor);
            printf("Tropas: %d)\n", t[i-1].tropas);
            printf("\n"); 
        }
        //fase de ataque 
       // printf("--- FASE DE ATAQUE---"); 
        // Função para jogar dados 
        //int lancadados() {
            //return num.aleatório(1,6);
        //int dadoAtacante = lancadados();
        //int dadoDefensor = lancadados();
        free(t);
        return 0;
    }

