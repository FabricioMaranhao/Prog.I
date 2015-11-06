/*
16. Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados
por ele. Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A
partir da média, informar o conceito de acordo com a tabela:
maior ou igual a 9 A
maior ou igual a 7.5 e menor que 9 B
maior ou igual a 6 e menor que 7.5 C
maior ou igual a 4 e menor que 6 D
menor que 4 E
*/

#include <stdio.h>
int main()
{
    float n1=0, n2=0, n3=0, me=0, ma=0;
    int i;

    printf("\nDigite a sua Nota 1:\n");
    scanf("%f", &n1);
    
    printf("\nDigite a sua Nota 2:\n");
    scanf("%f", &n2);
    
    printf("\nDigite a sua Nota 3:\n");
    scanf("%f", &n3);
    
    printf("\nDigite a sua Média das Notas dos Exercícios:\n");
    scanf("%f", &me);
    
    ma = (n1 + (n2*2) + (n3*3) + me)/7;
     
    printf("\nA sua Média Final foi %.2f.\n", ma);
     
    if (ma>=9)
    {
        printf("\nO seu conceito foi A, parabens!!!\n");
    }
     
    else if (ma>=7.5 && ma<9)
    {
        printf("\nO seu conceito foi B.\n");
    }
    
    else if (ma>=6 && ma<7.5)
    {
        printf("\nO seu conceito foi C.\n");
    }
    
    else if (ma>=4 && ma<6)
    {
        printf("\nO seu conceito foi D.\n");
    }
    
    else
    {
        printf("\nO seu conceito foi E, Estude Mais!!!.\n");
    }
    
    return 0;
    
}
