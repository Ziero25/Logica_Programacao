#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2;
    printf("Digite o valor do 1o Numero: ");
    scanf("%d", &numero1);
    printf("Digite o valor do 2o Numero: ");
    scanf("%d", &numero2);
    printf("%d + %d = %d\n", numero1, numero2, numero1 + numero2);
    printf("%d - %d = %d\n", numero1, numero2, numero1 - numero2);
    printf("%d x %d = %d\n", numero1, numero2, numero1 * numero2);
    printf("%d / %d = %d\n", numero1, numero2, numero1/numero2);
    printf("O resto de %d dividido por %d e %d", numero1, numero2, numero1%numero2);
    return 0;
}
