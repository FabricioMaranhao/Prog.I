/*
17. Fazer um programa em C para ler uma quantidade N de alunos. 
Ler a nota de cada um dos N alunos e calcular a média aritmética das notas.
Contar quantos alunos estão com a nota acima de 5.0. 
Obs.: Se nenhum aluno tirou nota acima de 5.0, imprimir mensagem:
Não há nenhum aluno com nota acima de 5.
*/

#include <stdio.h>

int main ()
{
    char continuar;
    float nota=0, media=0, totalnotas=0, notacima=0, notabaixo=0;
    int alunos=0;
    
    do
    {
        printf("\nInsira a nota do aluno:\n");
        scanf("%f", &nota);
        if (nota>5)
        {
            notacima = notacima + 1;
        }
        else
        {
            notabaixo = notabaixo + 1;
        }
        alunos = alunos + 1;
        totalnotas = totalnotas + nota;
        printf("\n Deseja continuar: s/n\n");
        scanf(" %c", &continuar);
    }
    while (continuar == 's');
    media = (float) totalnotas/alunos;
    printf("\nMedia Aritmetica é %.2f.\n", media);
    if(notacima>=1)
    {
         if (notacima==1)
         {
             printf("\nTemos %.0f aluno com nota acima de 5.\n", notacima);
         }
         else
         {
             printf("\nTemos %.0f alunos com notas acima de 5.\n", notacima);
         }
             
    }
   
    if (notacima<1)
    {
        printf("\nNão há nenhum aluno com nota acima de 5.\n");
    }
    if (notabaixo>=1)
    {
        if (notabaixo==1)
        {
            printf("\nTemos %.0f aluno com nota abaixo de 5.\n", notabaixo);
        }
        else
        {
            printf("\nTemos %.0f alunos com notas abaixo de 5.\n", notabaixo);
        }
            
    }
    return 0;
}