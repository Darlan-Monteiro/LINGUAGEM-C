#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Crie um programa que peça: 
// i. A quinta letra do alfabeto 
// ii. A sua matricula 
// iii. Uma nota de zero a dez, com casa decimal 
// iv. Após as três leituras acima, imprima “O 
// aluno da matrícula xxx obteve a nota yyy e 
// respondeu a letra Z”.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int matricula;
    float nota;
    char letra;

    printf("Digite a QUINTA LETRA do alfabeo: ");
    scanf("%c", &letra);

    printf("Digite a sua matricula:");
    scanf("%d",&matricula);

    printf("Digite uma nota de 0 a 10: ");
    scanf("%f",&nota);

    printf("O aluno da matricula %d obteve a nota %.2f e recebeu a letra %c.\n", matricula, nota, letra);


}