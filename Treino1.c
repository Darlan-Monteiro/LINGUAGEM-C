#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Vamos criar um programa que imprima: 
// 1. FeMASS 2020 
// 2. Programação de Computadores I 
// 3. Professor: Sergio Hermenegildo 
// 4. (pular 3 linhas) 
// 5. 10 e do tipo int 
// 6. Item (tabulação) Valor 
// 7. A     
// 1,20 
// 8. B     
// 9. C     
// 10. 
// 3,00 
// 5,70 
// “FIM DA LISTAGEM” 
int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("\nFeMASS 2020\n");
    printf("Programação de Computadores I\n");
    printf("Professor: Sergio Hermenegildo\n");
    printf("\n\n\n");
    printf("10 e do tipo int\n");
    printf("A \t\t 1,20\n");
    printf("B \t\t 3,00\n");
    printf("C \t\t 5,70\n");
    printf("FIM DA LISTAGEM\n");

    return 0;
}