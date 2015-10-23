#include <stdio.h>

int main()
{
    int contador;
    float soma=0, cont, media;
    
    for(contador=1; contador<=100; contador++)
    {
        soma = soma + contador;
        cont = cont +1;
    }
    
    printf("A soma dos numeros de 0_100 é %.0f", soma);

    media = soma/cont;
    
    printf("\nA media é %.2f", media);
    return 0;
}