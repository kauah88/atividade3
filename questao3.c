#include <stdlib.h>
#include <stdio.h>

int main(){

    int idade;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    if(idade>=70){
        printf("%i sao os novos 50\n", idade);
    }

    if(idade>21){
        printf("Adulto");
    }else{
        printf("Jovem");
    }


}