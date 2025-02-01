#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Agora vamos criar variáveis para os valores das 
// linhas 5, 7, 8 e 9, e substitui-las nos printf
int main()
{
    int dez = 10;
    float a = 1.20, b = 3.00, c = 5.70;

    setlocale(LC_ALL, "Portuguese");
    printf("\nFeMASS 2020\n");
    printf("Programação de Computadores I\n");
    printf("Professor: Sergio Hermenegildo\n");
    printf("\n\n\n");
    printf("%d e do tipo int\n", dez);
    printf("A \t\t %.2f\n",a);
    printf("B \t\t %.2f\n",b);
    printf("C \t\t %.2f\n",c);
    printf("FIM DA LISTAGEM\n");

    return 0;
}

