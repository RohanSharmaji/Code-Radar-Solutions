#include<stdio.h>
int main()
{
    char siign;
    scanf("%c",&siign);
    if (siign=='R')
     {
        printf("Stop");
     }
    else if(siign=='G')
    {
        printf("Go");
    }
    else if(siign=='Y')
    {
        printf("Slow Down");
    }
    else{
        printf("Invalid");
    }
}