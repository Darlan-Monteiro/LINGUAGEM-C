#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Vamos criar um programa que leia a ano do 
// seu nascimento e informe a sua idade (despreze 
// os meses): 

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int ano_nascimento;

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano_nascimento);
    int idade = 2025 - ano_nascimento;

    printf("Você nasceu em %d.\n", ano_nascimento);
    printf("Você tem %d anos de idade.\n", idade);

    return 0;

}