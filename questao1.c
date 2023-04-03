#include <stdlib.h>
#include <stdio.h>

int main(){

    int i; 
    float notas[5], media=0.0;

    for(i=0; i < 5; i++){
        printf("Insira suas notas 1 a 5: ");
        scanf("%f", &notas[i]);

        media+=(notas[i])/5;
    }
    printf("Media do aluno: %.2f", media);
}