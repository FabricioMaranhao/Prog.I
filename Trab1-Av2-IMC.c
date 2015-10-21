#include <stdio.h>


int main ()
{
float alt, peso, formula;


printf("Digite a sua altura com . exemplo 1.90:\n");
scanf("%f",&alt);


while(alt>3)
{
    printf("Digite a sua altura com . exemplo 1.90:\n");
    scanf("%f",&alt);
}

printf("Digite o seu peso:\n");
scanf("%f",&peso);
formula = peso/(alt*alt);

if(formula<=19)
{
    printf("Você está com %.2f, você está Magro!!!",formula);
}

else if(formula<=25)
{
    printf("Você está com %.2f, você está com o peso Ideal!!!",formula);
}

else if(formula<=30)
{
    printf("Você está com %2.f, você está Acima do Peso!!!",formula);
}

else
{
    printf("Você está com %2.f, você está OBESO!!!!\nSua situação é prejudicial para sua saúde",formula);
}

return 0;
}
