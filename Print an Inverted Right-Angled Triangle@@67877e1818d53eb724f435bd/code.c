#include <stdio.h>
int main()
{
    int i,k,n;
    scanf("%d",&n);
    for (k=1;k<=n;k++)
    {
    for(i=n;i>0;i--)
    {
        printf("*");
    }
    printf("\n");
    }
}