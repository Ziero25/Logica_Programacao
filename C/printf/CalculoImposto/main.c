#include <stdio.h>
#include <stdlib.h>

int main()
{
    float areaTotal, areaConstruida = 0;
    printf("Digite a area do terreno: ");
    scanf("%f", &areaTotal);
    printf("Digite a area construida: ");
    scanf("%f", &areaConstruida);
    float areaNaoConstruida = areaTotal - areaConstruida;
    float impostoAreaConstruida = 5 * areaConstruida;
    float impostoAreaNaoConstruida = 3.8 * areaNaoConstruida;
    float impostoTotal = impostoAreaConstruida + impostoAreaNaoConstruida;
    printf("Total do imposto: %f", impostoTotal);

    return 0;
}
