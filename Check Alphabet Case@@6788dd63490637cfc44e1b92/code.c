#include <stdio.h>
int main()
{
    char mo;
    scanf("%c",&mo);
    if((mo>='A')&&(mo<='Z'))
    {
        printf("Uppercase");
    }
    else
    {
        if((mo>='a')&&(mo<='z'))
        printf("Lowercase");
    }
}