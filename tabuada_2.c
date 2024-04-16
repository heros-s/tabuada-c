#include <stdio.h>

int main()
{
    int numero = 0;
    int inicio = 0;
    int fim = 0;

    printf("\ndigite um numero para ver sua tabuada: ");
    scanf("%d", &numero);

    printf("\ndigite o numero no qual deseja comecar a tabuada: ");
    scanf("%d", &inicio);

    printf("\ndigite o numero no qual deseja terminar a tabuada: ");
    scanf("%d", &fim);

    for(inicio ; inicio <= fim ; inicio++)
    {
        printf("%i x %i = %i\n", numero, inicio, inicio * numero);
    }

    return 0;
}