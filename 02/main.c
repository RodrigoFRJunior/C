#include <stdio.h>
#include <string.h>

int main(){
    int idade;
    char nome[10];

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Seu nome e %s e voce tem %d anos. \n", nome, idade);
    
    return 0;
}