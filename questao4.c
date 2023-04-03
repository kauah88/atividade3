#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade;

    printf("Informe a idade do eleitor: ");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("Nao nasceu!\n");
    }
    else {
        if (idade <= 15) {
            printf("Nao vota!\n");
        }
        else {
            if (idade <= 17) {
                printf("Voto opcional!\n");
            }
            else {
                if (idade <= 65) {
                    printf("Voto obrigatorio!\n");
                }
                else {
                    if (idade == 41) {
                        printf("Ganha premio e nao vota!\n");
                    }
                    else {
                        if (idade <= 88) {
                            printf("Voto opcional!\n");
                        }
                        else {
                            printf("Ganha premio e nao vota!\n");
                        }
                    }
                }
            }
        }
    }

    return 0;
}
