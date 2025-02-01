#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
    char letra;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite uma letra: \n");
    scanf("%c", &letra);
    for (int i = 0; i < 9; i++){
        printf("%c\n", letra);
    }

    return 0;

}