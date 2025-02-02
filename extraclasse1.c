#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{

int menu;
float v1 = 0, v2 = 0, v3 = 0;

setlocale(LC_ALL, "Portuguese");

printf("Insira 3 valores decimais: \n");
if (scanf("%f %f %f", &v1, &v2, &v3) != 3) {
    printf("Erro: Entrada inválida! Certifique-se de digitar três números.\n");
    return 1;
}


printf("Escolha uma opção do menu:\n");
printf("1 - Ordem crescente\n");
printf("2 - Ordem decrescente\n");
printf("3 - Maior valor\n");
printf("Opção: ");
scanf("%d", &menu);

if(menu != 1 && menu != 2 && menu != 3){
    printf("Opção inválida\n");
    return 0;
}

float menor, meio, maior;

    if(v1 < v2 && v1 < v3){
        menor = v1;
        if(v2 <v3){
            meio = v2;
            maior = v3;
        }
        else{
            meio = v3;
            maior = v2;
        }
    }

    else if (v2 < v1 && v2 < v3){
        menor = v2;
        if(v1 < v3){
            meio = v1;
            maior = v3;
        }
        else{
            meio = v3;
            maior = v1;
        }
    }

    else{
        menor = v3;
        if(v1 < v2){
            meio = v1;
            maior = v2;
        }
        else{
            meio = v2;
            maior = v1;
        }
    }

switch (menu){
    case 1:
        printf("Ordem crescente: %.2f %.2f %.2f\n", menor, meio, maior);
        break;
    case 2:
        printf("Ordem decrescente: %.2f %.2f %.2f\n", maior, meio, menor);
        break;
    case 3:
        printf("Maior valor: %.2f\n", maior);
        break;
    default:
        printf("Opção inválida\n");
        break;
    }
    return 0;
}