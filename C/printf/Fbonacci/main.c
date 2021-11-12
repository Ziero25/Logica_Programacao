#include <stdio.h>
#include <stdlib.h>

int main()
{

    int quantidadeElementos = 0;
    printf("Digite o numero de elementos da sequencia: ");
    scanf("%d", &quantidadeElementos);
    int numeroAtual = 1;
    printf("Sequencia gerada: \n");
    printf("%d  ", numeroAtual);
    int numeroAnterior = 0;
    int i = 0;
    int temporario = 0;

    for(i = 1; i < quantidadeElementos; i++){
        temporario = numeroAtual;
        numeroAtual = numeroAtual + numeroAnterior;
        numeroAnterior = temporario;
        printf("%d  ", numeroAtual);
     }
    return 0;
}
