#include <stdio.h>
int main()
{
  char topa;
  scanf("%c",&topa);
  if ((topa=='a')||(topa=='e')||(topa=='i')||(topa=='o')||(topa=='u'))
  {
    printf("Vowel");
  }
  else if ((topa>='a')&&(topa<='z'))
  {
    printf("Consonant");
  }
  else if((topa>='0')&&(topa<='9'))
  {
    printf("Digit");
  }
  else if((topa>='A')&&(topa<='Z'))
  {
    printf("Vowel")
  }
   else
   {
    printf("Special Character");
   }

}