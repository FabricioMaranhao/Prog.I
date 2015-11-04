/* cafe com C - 6
Isosceles - 2 lados iguais
Equilatero - 3 lados iguais
Escaleno - 3 lados diferentes
*/

#include<stdio.h>

int main()
{
    int lado1, lado2, lado3;    

    printf("\n Entre com lado1 : \n");
    scanf("%d", &lado1);
    
    printf("\n Entre com lado2 : \n");
    scanf("%d", &lado2);
    
    printf("\n Entre com lado3 : \n");
    scanf("%d", &lado3);
    
    if (lado1 == lado2 && lado2 ==lado3)
    {
        printf("\n Triangulo Equilatero\n");
    }
    
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
    {
        printf ("\n Triangulo Isosceles\n");
    }
    
    else
    {
        printf("\n Triangulo Escaleno\n");
    }
    
    return 0;
}
