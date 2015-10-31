#include <stdio.h>

/*
Função para calcular area do triangulo
*/

float area_triangulo(int base, int altura)
{
    float res;
    
    res = (base*altura) / 2.0;
    
    return res;
    
}

int main()
{
    int b, a;
    float area;
    
    printf("\n Calculo da area do triangulo");
    printf("\n Entre com a base:");
    scanf("%d", &b);
    
    printf("\n Entre com a altura:");
    scanf("%d", &a);
    
    area = area_triangulo(b,a);
    
    printf("\n Valor da area=%.2f", area);
    
}
