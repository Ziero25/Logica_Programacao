#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite o numero do mes: ");
    int mes = 0;
    scanf ("%d", &mes);
    switch (mes) {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Marco");
        break;
    case 4:
        printf("Abril");
        break;
    default:
        printf("Mes Invalido");
        break;

    }
    return 0;
}
