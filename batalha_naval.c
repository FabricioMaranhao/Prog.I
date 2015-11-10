/*
 - Trabalho 3 de Programacao de Computadores I - Batalha Naval   
 - Curso de Sistemas de Informacao  
 - Aluno: Fabrício Maranhão - matricula: 0050001211  
 - Professor: Alex Salgado
*/ 
#include<stdio.h>

int main()
{
    int matriz[5][5], i, j, ponto, respi, respj;
    char nome[20], continuar;
    
    printf("Digite o seu nome:\n");
    scanf(" %s", nome);
    
    printf("\n%s, preencha a matriz com 1 - para o navio e 0 - para agua:", nome);
    for (i=1; i<6; i++)
    {
        for (j=1; j<6; j++)
        {
            printf("\n\n %s, digite a Linha %d, coluna %d:\n", nome, i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
   do
   {
        printf("\n%s, entre com as coordenadas:", nome);
        printf("\nLinha: \n");
        scanf("%d", &respi);
        while(respi>5 || respi<1)
        {
            printf("\n %s, entre com as coordenadas da Linha de 1 até 5:\n", nome);
            scanf("%d", &respi);
        }
        
        printf("\nColuna: \n");
        scanf("%d", &respj);
        while(respj>5 || respj<1)
        {
            printf("\n %s, entre com as coordenadas da Coluna de 1 até 5:\n", nome);
            scanf("%d", &respj);
        }
        
        if (matriz[respi][respj] == 1)
        {
            printf("\nBOMBA!!! Vc ganhou 1 ponto.");
            ponto = ponto + 1;
        }
        else
        {
            printf("\nAgua!!! Que pena.");
        }
        printf("\nDeseja Continuar: (s/n)?\n");
        scanf(" %c", &continuar);
   }    
        while(continuar=='s');
        printf("\n\n%s, vc fez %d pontos.", nome, ponto);
    return 0;
}