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
    
    for (int i = 1; i <= numTerritorio; i++) {
    printf("%d. %s (Exército %s, Tropas: %d)\n", i, t[i-1].nome, t[i-1].cor, t[i-1].tropas);
    }
    //Loop de apresentacao de todos os territorios
    // Fase de ataque
    
    printf("\n=========================================\n");
    printf("         FASE DE ATAQUE                  \n");
    printf("=========================================\n");
    
    int atacante, defensor;

    printf("\n--- ESCOLHA NUMERO DO TERRITORIO ATACANTE ---\n");
        
        while (1) {  // 1 = sempre verdadeiro, loop continua
            printf("Digite um numero (1 a 5): ");
            scanf("%d", &atacante);
            
            if (atacante >= 1 && atacante <= 5) {
                printf("Valido!\n");
                break;  // Para o loop (sai do while)
            } else {
                printf("Invalido! Tente novamente.\n");
                while (getchar() != '\n'); // Limpa até encontrar quebra de linha
                // Volta para o início do while(1)
            }
        }
    printf("\n--- ESCOLHA O TERRITÓRIO QUE QUER ATACAR ---\n");
        while (1) {  // 1 = sempre verdadeiro, loop continua
            printf("Digite um numero (1 a 5): ");
            scanf("%d", &defensor);
        
            if (defensor >= 1 && defensor <= 5 && atacante != defensor) {
                printf("Valido!\n");
                break;  // Para o loop (sai do while)
            } else {
                printf("Invalido! Tente novamente.\n");
            while (getchar() != '\n'); // Limpa até encontrar quebra de linha
            // Volta para o início do while(1)
            }


    }
         



        free(t);
         return 0;
}  
    