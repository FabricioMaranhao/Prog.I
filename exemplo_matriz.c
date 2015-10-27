#include <stdio.h>
//Programa para ler av1, av2, av3 de 5 alunos, no final imprimir todas as notas av2, todas as notas do ultimo aluno, todas as notas de todos os alunos
int main()
{
    float notas[3][5];
    int i,j;

    //ler os valores pelo teclado
    for(i=0; i<=2; i++) //linha da matriz
    {
        for(j=0; j<=4; j++) // coluna da matriz
        {
            printf("\n Av%d do aluno %d = ", i+1, j+1 );
            scanf("%f", &notas[i][j]);
        }

    }
    
    // Imprimir todas as notas AV2
    printf("\n Notas da Av2\n");
    for (j=0; j<=4; j++)
    {
       if(j<=3)
        {
            printf("%.2f - ", notas[1][j]);
        }
        else
        {
            printf("%.2f.", notas[1][j]);
        }
    }
    
    // Imprimir todas as notas do ultimo aluno
    
    printf("\n Todas as notas do ultimo aluno\n");
    for (i=0; i<=2; i++)
    {
        
        if(i<=1)
        {
            printf("%2.f - ", notas[i][4]);
        }
        else
        {
             printf("%2.f.", notas[i][4]);
        }
    }
    
    // Imprimir todas as notas de todos os alunos
    printf("\n Todas as notas de todos os aluno\n");
    for (i=0; i<=2; i++)
    {
        for (j=0; j<=4; j++)
        {
            printf("\nAv%d do aluno %d = %2.f\n", i+1, j+1, notas[i][j]);
        }
    }
    
    
    return 0;
}