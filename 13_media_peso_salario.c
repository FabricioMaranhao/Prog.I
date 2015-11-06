#include <stdio.h>

/*
13. Leia o peso, salário e sexo(m/f) de 10 pessoas e: 
a) Mostrar a média do peso das mulheres que tem mais de 50 kg 
b) Mostrar a média do salário dos homens que recebem entre R$ 1000 e R$ 3000.
*/

int main ()
{
    float peso=0, salario=0, mediapeso=0, media=0, contp=0, conts=0, mediasal=0, medias=0;
    int sexo, i;
    
    for(i=1; i<11; i++)
    {
        printf("\nDigite o seu sexo: 1 para feminino e 2 para masculino.\n");
        scanf("%d", &sexo);
        printf("\nDigite o seu peso:\n");
        scanf("%f", &peso);

        if (sexo == 1  && peso > 50)
        {
            contp = contp + 1;
            mediapeso = mediapeso + peso;
            media = mediapeso / contp;
        }

        printf("\nDigite o seu salario:\n");
        scanf("%f",&salario);
    

        if (sexo == 2 && salario >= 1000 && salario <= 3000)
        {
            conts = conts + 1;
            mediasal = mediasal + salario;
            medias = mediasal / conts;
        }
    }    
        if (contp==1)
        {
            printf("\nA Media do Peso das Mulheres acima de 50kg é %.2fkg, e temos %.0f pessoa.\n", media, contp);
        }
        else
        {
            printf("\nA Media do Peso das Mulheres acima de 50kg é %.2fkg, e temos %.0f pessoas.\n", media, contp);
        }
        
        if (conts==1)
        {
            printf("\nA Media Salarial dos Homens que ganham entre 1000.00 reais e 3000.00 reais é %.2f reais, e temos %.0f pessoa.\n", medias, conts);
        }
        else
        {
            printf("\nA Media Salarial dos Homens que ganham entre 1000.00 reais e 3000.00 reais é %.2f reais, e temos %.0f pessoas.\n", medias, conts);
        }    
        return 0;

}