#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0;
    printf("digite um numero: ");
    scanf("%d", &numero);
    printf("%d e maior que 10? %d\n", numero, numero > 10);
    printf("%d e maior ou igual a 10? %d\n", numero, numero >= 10);
    printf("%d e menor que 10? %d\n", numero, numero < 10);
    printf("%d e menor ou igual a 10? %d\n", numero, numero <= 10);
    printf("%d e igual a 10? %d\n", numero, numero == 10);
    printf("%d  diferente de 10? %d\n", numero, numero != 10);

    return 0;
}
