#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0;
    printf("Digite o numero: ");
    scanf("%d", &numero);
    int i = 0;
    for (int i = 0; i <= 10; i++ ) {
        printf("%d x %d = %d\n", numero, i, numero * i);


    }
    return 0;
}
