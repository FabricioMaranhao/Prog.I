#include <stdio.h>

/* Exiba a tabuada de um número fornecido pelo usuário.

*/

int main()
{
    int i,j,k;

    printf("\nDigite um numero para gerar a tabuada:\n");
    scanf("%d", &i);

    printf("\n");
    
    for(j=1; j<11; j++)
    {
        k = i * j;
        printf("%d x %d = %d\n", i, j, k);
    }
    
    return 0;
    

}
