#include <stdio.h>

int main()
{
    float num[10], media, cont=0, soma_vet=0;
    int i;
    
    for(i=0;i<10;i++)
    {
        printf("Digite um numero:\n");
        scanf("%f", &num[i]);
        cont = cont + 1;
        soma_vet = soma_vet + num[i];
    }
    
    
    media = soma_vet/cont;
    
    printf("A media é %.2f", media);
    
    
    return 0;
    
}