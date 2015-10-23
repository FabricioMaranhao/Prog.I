#include <stdio.h>

int main()
{
    int ano, idade;
    
    printf("Informe o seu Ano de Nascimento:\n");
    scanf("%d", &ano);
    
    if(ano<11)
    {
        idade = 15 - ano;
        printf("\nSua idade é %d", idade);
    }
    
    else if(ano<100)
    {
        idade = 115 - ano;
        printf("\nSua idade é %d", idade);
    }
    
    else 
    {
        idade = 2015 - ano;
        printf("\nSua idade é %d", idade);
    }
    
    return 0;
}