#include <stdio.h>
int main()
{
 int first;
 int second;
 scanf("%d %d",&first,&second);
 if ((first>0)&&(second<0))
 {
    printf("True");
 }
 
 else if((second==0)&&(first>0))
    {
        printf("True");
    
    }
 else if((first==0)&&(second<0))
 {
    printf("True");
 }
 
else{
    printf("False");
}
}