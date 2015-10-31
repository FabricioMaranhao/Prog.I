#include <stdio.h>

/* 
    - Trabalho 2 de Programacao de Computadores I - Retangulo

    - Curso de Sistemas de Informacao
    
    - Aluno: Fabricio Maranhao - Matricula: 0050001211
    
    - Professor: Alex Salgado
*/

int main()
{
    //char a=42, b=64, c=35, desenho;
    
    //char a= *, b= @, c= #, desenho;
    int resposta, alt, comp, i, j;
    char nome[20], continuar;
    
    do
    {
        printf("Digite o seu nome:\n");
        scanf("%s", nome);
    
        printf("\n%s, escolha uma opção de caracter para desenhar o seu Retangulo:\n 1 para %c, 2 para %c, 3 para %c:\n", nome, 42, 64, 35);
        //desenho = fgetc(stdin);
        scanf("%d", &resposta);
    
        if (resposta == 1)
        {
            printf("\n%s, digite um numero para o Comprimento do seu Retangulo, este numero devera ser maior do que 2:\n", nome);
            scanf("%d",&comp);
        
            while(comp<3)
            {
                printf("\n%s, voce digitou para o Comprimento, um numero menor ou igual a 2. \nPara desenhar o seu Retangulo, digite um numero maior do que 2:\n", nome);
                scanf("%d",&comp);
            }
        
            printf("\n%s, digite um numero para a Altura do seu Retangulo, este numero devera ser maior do que 2:\n", nome);
            scanf("%d",&alt);
        
            while(alt<3)
            {
                printf("\n%s, voce digitou para a Altura, um numero menor ou igual a 2. \nPara desenhar o seu Retangulo, digite um numero maior do que 2:\n", nome);
                scanf("%d",&alt);
            }

            printf("\n\nOlá, meu nome eh %s, e o meu retangulo ficou assim:\n\n", nome);
        
            for (i=1; i<=alt; i++)
            {
                for(j=1; j<=comp; j++)
                {
                    if (i>1 && j>1 && j<comp && i<alt)
                    {
                        printf(" ");
                    }
                
                    else
                    {
                        printf("%c",42);
                    }
                }
            printf("\n");
            }
        
            printf("\nDeseja continuar (s/n)?\n");
            scanf(" %c", &continuar);
        }
        
        else if (resposta == 2)
        {
            printf("\n%s, digite um numero para o Comprimento do seu Retangulo, este numero devera ser maior do que 2:\n", nome);
            scanf("%d",&comp);
        
            while(comp<3)
            {
                printf("\n%s, voce digitou para o Comprimento, um numero menor ou igual a 2. \nPara desenhar o seu Retangulo, digite um numero maior do que 2:\n", nome);
                scanf("%d",&comp);
            }
        
            printf("\n%s, digite um numero para a Altura do seu Retangulo, este numero devera ser maior do que 2:\n", nome);
            scanf("%d",&alt);
        
            while(alt<3)
            {
                printf("\n%s, voce digitou para a Altura, um numero menor ou igual a 2. \nPara desenhar o seu Retangulo, digite um numero maior do que 2:\n", nome);
                scanf("%d",&alt);
            }
       
            printf("\n\nOlá, meu nome eh %s, e o meu retangulo ficou assim:\n\n", nome);
       
            for (i=1; i<=alt; i++)
            {
                for(j=1; j<=comp; j++)
                {
                    if (i>1 && j>1 && j<comp && i<alt)
                    {
                        printf(" ");
                    }
                
                    else
                    {
                        printf("%c",64);
                    }
                }
            printf("\n");
            }
            printf("\nDeseja continuar (s/n)?\n");
            scanf(" %c", &continuar);
        }

        else
        {
            printf("\n%s, digite um numero para o Comprimento do seu Retangulo, este numero devera ser maior do que 2:\n", nome);
            scanf("%d",&comp);
        
            while(comp<3)
            {
                printf("\n%s, voce digitou para o Comprimento, um numero menor ou igual a 2. \nPara desenhar o seu Retangulo, digite um numero maior do que 2:\n", nome);
                scanf("%d",&comp);
            }
        
            printf("\n%s, digite um numero para a Altura do seu Retangulo, este numero devera ser maior do que 2:\n", nome);
            scanf("%d",&alt);
        
            while(alt<3)
            {
                printf("\n%s, voce digitou para a Altura, um numero menor ou igual a 2. \nPara desenhar o seu Retangulo, digite um numero maior do que 2:\n", nome);
                scanf("%d",&alt);
            }
        
            printf("\n\nOlá, meu nome eh %s, e o meu retangulo ficou assim:\n\n", nome);
        
            for (i=1; i<=alt; i++)
            {
                for(j=1; j<=comp; j++)
                {
                    if (i>1 && j>1 && j<comp && i<alt)
                    {
                        printf(" ");
                    }
                
                    else
                    {
                        printf("%c",35);
                    }
                }
            printf("\n");
            }
            printf("\nDeseja continuar (s/n)?\n");
            scanf(" %c", &continuar);
        }
    }
    while(continuar == 's');
    return 0;
}