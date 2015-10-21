#include <stdio.h>

int main()
{
    int num;
    num=-2;
    while(num<10000)
    {
        num+=2;
        printf("%d - ", num);
    }
        
    return 0;
}