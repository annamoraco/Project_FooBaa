#include <stdio.h>

int main()
{
    int i=1;
    
    while (i<=100)
    {
        if(i%3==0 && i%5==0)
        printf("\nFooBaa");
        
        else if(i%3==0)
        printf("\nFoo");
        
        else if(i%5==0)
        printf("\nBaa");
        
        else
        printf("\n%d",i);
        
        i++;
    }
}
