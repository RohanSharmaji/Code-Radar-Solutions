#include <stdio.h>
int main()
{
    int first,second;
    sacnf("%d %d",&first,&second);
    if ((first>0)&&(second>0))
    printf("True");
    else if((first>0)&&(second<0))
    printf("True");
    else
    {
        printf("False");
    }
}