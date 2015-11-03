#include<stdio.h>

/* Descubra o maior entre 3 números fornecidos pelo usuário*/

int main()
{
    //float n1, n2, n3, maior=0;
    int i;
    float num=0, maior=0;
    
   /*  OUTRA FORMA SÓ QUE ESTÁ SÓ PODE SER USADA PARA 3 NUMEROS. 
        A QUE ESTÁ RODANDO NO PROGRAMA, SÓ ALTERAR O i, E PODE SER FEITO COM QUANTOS NUMEROS ACHAR INTERESSANTE.
    printf("Digite 3(tres) numeros:\n");
    scanf("%f %f %f",&n1,&n2,&n3);
    
    if (n1>n2 && n1>n3)
    {
        maior = n1;
        printf("\n O Maior numero é %.2f\n", n1);
    }
    
    else if (n2>n1 && n2>n3)
    {
        maior = n2;
        printf("\nO Maior numero é %.2f\n", n2);
    }

    else 
    {
        maior = n3;
        printf("\nO Maior numero é %.2f\n", n3);
    }    */
    
    //printf("\nTodos os digitos são: %.2f, %.2f, %.2f\n", n1, n2, n3);
    
    for(i=1; i<4; i++)
    {
        printf("\nDigite um numero:\n");
        scanf("%f", &num);
        
        if(num>maior)
        {
            maior = num;
        }
    }
    printf("\n O maior numero é %.2f\n", maior);    
    
    return 0;
}
