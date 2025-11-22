#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const int TRUE = 1;
const int FALSE = 0;
struct Territorio {
  char nome[30];
  char cor[10];
  int tropas;
  char missao[30];
};
void atacar(struct Territorio *atacante, struct Territorio *defensor);
void loopPrincipal(struct Territorio *t, int numTerritorio);
char *sorteioMissao(int iAtacante);
int encontrado(int i);

int numTerritorio = 5;
int missoesSorteadas[5];

int main() {
  srand(time(NULL)); // Usar sempre depois da main

  // Alocando memória e criando um ponteiro
  struct Territorio *t = malloc(numTerritorio * sizeof(struct Territorio));
  if (t == NULL)
    return 1;

  // Criacao do Menu
  printf("=============================\n\n");
  printf("Vamos cadastrar os 5 territorios iniciais do nosso mundo.\n");
  for (int i = 1; i <= numTerritorio; i++) {
    printf("\n--- Cadastrando Territorio %d ---\n", i);
    printf("Nome do Territorio: ");
    scanf("%s", t[i - 1].nome);
    printf("Cor do Exercito: ");
    scanf("%s", t[i - 1].cor);
    printf("Numero de Tropas: ");
    scanf("%d", &t[i - 1].tropas);
  }

  // loop principal do jogo
  int escolhaMenu;
  int atacante, defensor;

  while (1) {
    printf("\n==O QUE DESEJA FAZER?==\n");
    printf("1.== ATACAR==\n");
    printf("2.==SAIR==\n");
    printf("==SUA ESCOLHA==");
    scanf("%d", &escolhaMenu);

    if (escolhaMenu == 1) {
      // Exibe os 5 territórios cadastrados
      printf("=========================================\n");
      printf("      MAPA DO MUNDO - ESTADO ATUAL       \n");
      printf("=========================================\n");

      for (int i = 1; i <= numTerritorio; i++) {
        printf("%d. %s (Exército %s, Tropas: %d)\n", i, t[i - 1].nome,
               t[i - 1].cor, t[i - 1].tropas);
      }
      // Loop de apresentacao de todos os territorios
      //  Fase de ataque

      printf("\n=========================================\n");
      printf("         FASE DE ATAQUE                  \n");
      printf("=========================================\n");

      // printf("\n--- ESCOLHA NUMERO DO SEU TERRITORIO ---\n");

      while (1) { // 1 = sempre verdadeiro, loop continua
        printf("Digite um numero (1 a 5): ");
        scanf("%d", &atacante);

        if (atacante >= 1 && atacante <= 5) {
          printf("Valido!\n");
          break; // Para o loop (sai do while)
        } else {
          printf("Invalido! Tente novamente.\n");
          // while (getchar() != '\n'); // Limpa até encontrar quebra de linha
          // Volta para o início do while(1)
        }
      }
      if (strlen(t[atacante].missao) == 0 ){
        char *missao = sorteioMissao(atacante);
        
        strcpy(t[atacante].missao, missao);
      }
      printf("%s\n", t[atacante].missao);

      printf("\n--- ESCOLHA O TERRITÓRIO QUE QUER ATACAR ---\n");
      while (1) { // 1 = sempre verdadeiro, loop continua
        printf("Digite um numero (1 a 5): ");
        scanf("%d", &defensor);

        if (defensor >= 1 && defensor <= 5 && atacante != defensor) {
          printf("Valido!\n");
          break; // Para o loop (sai do while)
        } else {
          printf("Invalido! Tente novamente.\n");
          while (getchar() != '\n')
            ; // Limpa até encontrar quebra de linha
          // Volta para o início do while(1)
        }
      }

      printf("atacante %d, defensor %d", atacante, defensor);
      // Função de ataque

      printf("\n==========================================\n");
      printf("                  BATALHA                  \n");
      printf("===========================================\n");

      atacar(&t[atacante - 1], &t[defensor - 1]);
    //   while (t[atacante].tropas > 1 && t[defensor].tropas > 0) {
    //     // chama a função atacar novamente
    //     atacar(&t[atacante - 1], &t[defensor - 1]);
    //   }
    } else if (escolhaMenu > 1) {
      break;
    }
  }

  free(t);
  return 0;
}

void atacar(struct Territorio *atacante, struct Territorio *defensor) {
  int dadoAtacante = rand() % 6 + 1;
  int dadoDefensor = rand() % 6 + 1;
  printf("%d ATACA %d DEFENDE\n", dadoAtacante, dadoDefensor);

  if (dadoAtacante > dadoDefensor) { // ganhador
    int ganhou = atacante->tropas + 1;
    strcpy(defensor->cor, atacante->cor);
    atacante->tropas = ganhou;
    printf("%s Ganhou\n", atacante->nome);
  } else if (dadoAtacante < dadoDefensor) { // perde
    int perde = atacante->tropas - 1;
    atacante->tropas = perde;
    printf("%s Ganhou\n", defensor->nome);
  } else { // empata
    printf("== Empate, Jogue novamente==\n");
  }
}

char *sorteioMissao(int iAtacante) {
    char *missoes[] = {
        "Eliminar 1",
        "Eliminar 2",
        "Eliminar 3",
        "Eliminar 4",
        "Eliminar 5",
    };

    int i;
    do {
        i = rand() % 5;
    } while(encontrado(i) || (iAtacante != i));
    
    missoesSorteadas[i] = i;

    return missoes[i];
}

int encontrado(int iTerritorio){
    if (missoesSorteadas[iTerritorio]){
        return TRUE;
    }
    
    return FALSE;
}