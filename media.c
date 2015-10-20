#include <stdio.h>

int main ()
{
    float av1, av2, media;
    printf("Digite a nota da av1:\n");
    scanf("%f", &av1);
    printf("Digite a nota da av2:\n");
    scanf("%f", &av2);
    media = (av1+av2)/2;
    if (media>5.9)
        printf("Sua media é %.2f, vc está Aprovado", media);
    else
        printf("Sua media é %.2f, vc está Reprovado", media);
    
    return 0;
    

}