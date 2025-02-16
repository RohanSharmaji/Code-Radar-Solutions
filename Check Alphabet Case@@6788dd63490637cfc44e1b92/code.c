#include <stdio.h>
int main()
{
    char mo;
    scanf("mo",&mo);
    if((mo='A')||(mo>='Z'))
    {
        printf("Uppercase");
    }
    else
    {
        if((mo<='a'))
        printf("Lowercase");
    }
}