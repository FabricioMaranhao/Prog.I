#include <stdio.h>
#include <string.h>
/*
* criar um programa para pedir um nome e imprimir o mesmo ao contrario
* o programa deve perguntar se o usuario deseja continuar
* caso positivo, reiniciar o programa,
* caso negativo, terminar o programa.
*/

int main()
{
    char nome[50];
    char continuar; //continuar (s/n) ?
    int i, tam;
    
    do
    {
        printf("\n Entre com um nome:" );
        scanf("%s", nome);
        
        tam = strlen(nome); //da funcao string.h
        printf("\n Nome invetido: ");
        for(i=tam-1; i>=0 ; i--)
        {
            printf("%c", nome[i]);
        }
        
        printf("\n Deseja continuar(s/n)?");
        scanf(" %c", &continuar); //* colocar um espaco em branco antes do percentagem (na sala explico)
        printf ( "continuar = %c", continuar);
    }while(continuar == 's');
    
    return 0;
}