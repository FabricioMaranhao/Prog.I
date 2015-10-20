#include <stdio.h>

int main()
{
    int num;
            
    for(num=0; num<10000; num+=2)
    {
        printf("%d - ", num);
    }
    return 0;
}