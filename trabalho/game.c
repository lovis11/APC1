#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Jogo {
    char palavra[50];
    char tentativas[50];
    int chancesRestantes;
};


char historico[100][50];
int contadorHistorico = 0;


void limparTela() {
    system("clear");
}


int main() {
    struct Jogo game;
    int menuSelecionado = 0;
    int acertos = 0;
    char chute;


    strcpy(game.palavra, "computador");
    game.chancesRestantes = 5;
    memset(game.tentativas, '_', strlen(game.palavra));

    while (1) {
        limparTela();
        printf("\nJogo da Forca\n");
        printf("1. Jogar\n");
        printf("2. Ver resultados anteriores\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &menuSelecionado);
        getchar(); 

        switch (menuSelecionado) {
            case 1:
                while (game.chancesRestantes > 0) {
                    limparTela();
                    printf("\nPalavra: %s\n", game.tentativas);
                    printf("Chances restantes: %d\n", game.chancesRestantes);
                    printf("Digite uma letra: ");
                    scanf(" %c", &chute);
                    getchar(); 

                    acertos = 0;
                    for (int i = 0; game.palavra[i] != '\0'; i++) {
                        if (game.palavra[i] == chute) {
                            game.tentativas[i] = chute;
                            acertos++;
                        }
                    }

                    if (acertos == 0) {
                        game.chancesRestantes--;
                    }

                    if (strcmp(game.palavra, game.tentativas) == 0) {
                        printf("\nParabéns! Você acertou a palavra: %s\n", game.palavra);
                        strcpy(historico[contadorHistorico++], game.tentativas);
                        getchar();
                        break;
                    }
                }

                if (game.chancesRestantes == 0) {
                    printf("\nVocê perdeu. A palavra era: %s\n", game.palavra);
                    strcpy(historico[contadorHistorico++], game.tentativas);
                    getchar();
                }
                break;
            case 2:
                limparTela();
                printf("\nResultados Anteriores:\n");
                for (int i = 0; i < contadorHistorico; i++) {
                    printf("%d: %s\n", i + 1, historico[i]);
                }
                getchar();
                break;
            case 3:
                printf("\nSaindo do jogo...\n");
                exit(0);
            default:
                printf("\nOpção inválida!\n");
                getchar();
        }
    }

    return 0;
}
