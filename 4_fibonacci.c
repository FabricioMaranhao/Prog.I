#include <stdio.h>

int main()
{
    int n1=1, n2=0;
    
    while(n1<1560)
    {
        n1=n1+n2;
        printf("%d, ", n1);
        
        n2=n1+n2;
        if(n2<2580)
        {
            printf("%d, ", n2);
        }
        
        else
        {
            n2=n2/10;
            printf("%.d....\n", n2);
        }
        
    }
   
    return 0;
}