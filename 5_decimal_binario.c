// exercicio cafe com C, 5(ler decimal e transformar em binario

#include <stdio.h>

int main ()

{
    int num, i=0, j, vet[20];

    printf("Digite um numero decimal:\n");
    scanf("%d", &num);
    
    while (num>0)
    {
    vet[i] = num % 2;
    i++;
    num = num / 2;
    }
    
    printf("o numero em binário é: ");
    for(j = i - 1; j>=0; j--)
    {
        printf("%d", vet[j]);
    }
    
    printf("\n");
    return 0;
}

