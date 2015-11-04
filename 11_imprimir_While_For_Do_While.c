#include <stdio.h>
int main()
{
    int i=1;
    char nome[20];
  
    printf("\nDigite Linguagem C\n");
    scanf("%[^\n]", nome);
    
    printf("\nUsando While!!!\n");
    while(i<11)
    {
        printf("%d - %s",i, nome);
        printf("\n");
        i++;
    }
    
    printf("\n");
    printf("Usando For!!!\n");
    for(i=1; i<11; i++)
    {
        printf("%d - %s",i, nome);
        printf("\n");
    }
    printf("\nUsando Do-While!!!\n");
    i=1;
    do
    {
        
        printf("%d - %s",i, nome);
        printf("\n");
        i++;
    }
    while(i<11);
    
    return 0;
    
    
}

