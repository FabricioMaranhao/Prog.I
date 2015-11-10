/*
Faça um programa em C para:
- Ler 10 numeros preenchendo num vetor de inteiros;
- Apos a leitura dos 10 numeros, o programa deve pedir ao usuario um numero;
- se este numero existir no vetor, mande uma mensagem;"chave encontrada no vetor"
senao imprima: "chave não encontrada no vetor"
*/

#include<stdio.h>

int main()
{
    int i=0, vet[10], resp, achou=0;
    
    for (i=0; i<10; i++)
    {
        printf("\nDigite um numero, para preencher o vetor:\n");
        scanf("%d", &vet[i]);
    }
    printf("\nDigite um numero para ver se este numero tem no vetor:\n");
    scanf("%d", &resp);
    for (i=0; i<10; i++)
    {
        if(resp==vet[i])
        {
            achou=1;
        }
    }
    if (achou==1)
    {
        printf("\nChave encontrada no vetor");
    }
    else
    {
        printf("\nChave não encontrada no vetor");
    }
    return 0;
}