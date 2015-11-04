/*
7 - Faça um programa para calcular a Hipotenusa

h = raiz quadrada de (c1² +c2²)

h=sqrt (c1²+c2²);
h=sqrt (c1**2)
sqrt é igual a raiz quadrada
para usar o a biblioteca matematica tem que colocar: gcc nome do programa.c -o nome do programa -lm
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float c1, c2, hipo;
    
    printf("\n Entre com cateto 1 :\n");
    scanf("%f", &c1);
    
    printf("\n Entre com cateto 2 :\n");
    scanf("%f", &c2);
    
    hipo = sqrt( pow(c1,2) + pow(c2,2) );
    
    printf ("\n Hipotenusa = %.2f \n", hipo);
    return 0;
} 