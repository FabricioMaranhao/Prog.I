#include<stdio.h>

/* Fazer um programa em C para ler e contabilizar os votos de 2 candidatos:
Candidato 1 e Candidato 2. Apos a leitura do voto, deve-se perguntar se deseja continuar(s/n).
O programa só termina quando o usuario nao desejar mais continuar.
Ao final, o programa deve informar a percentagem de votos do candidato 1 e candidato 2.
*/

int main()
{
    int voto=0;
    float cand1=0, cand2=0, percent1=0, percent2=0, cont=0;
    char continuar;

    do
    {
        printf("Para votar no Candidato1, digite 1 ou para votar no Candidato2, digite 2:\n");
        scanf("%d", &voto);
   
        if(voto==1)
        {
            cand1 = cand1 + 1;
        }
    
        else if(voto==2)
        {
            cand2 = cand2 + 1;
        }
    
        else
        {
            while(voto>2)
            {
                printf("\nVc digitou um numero errado, favor repetir.\nPara votar no Candidato1, digite 1 ou para votar no Candidato2, digite 2:\n");
                scanf("%d", &voto);
                
                if(voto==1)
                {
                    cand1 = cand1 + 1;
                }
    
                else if(voto==2)
                {
                    cand2 = cand2 + 1;
                }
    
            }
        }
    
       cont = cont +1;
        printf("\nDeseja continuar:(s/n)?\n");
        scanf(" %c", &continuar);
    }
        while(continuar == 's');
        percent1 = (100*(cand1/cont));
        percent2 = (100*(cand2/cont));
        printf("\nTotal de Votos do Candidato1 = %0.f, com %1.f%% dos Votos.\n", cand1, percent1);
        printf("\nTotal de Votos do Candidato2 = %0.f, com %1.f%% dos Votos.\n", cand2, percent2);
        printf("\nTotal de Votantes: %0.f.\n",cont);
        return 0;
    
}
