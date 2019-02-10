#include<stdio.h>
int main()
{
    char ch,a,e,i,o,u,A,E,O,I,U;
    scanf("%c",&ch);
    if((ch>=65&&ch<=90)||(ch>97&&ch<=122))
    {
   switch(ch)
   {
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'o':
      case 'O':
      case 'U':
      case 'u':
      case 'i':
      case 'I':
      printf("Vowel");
      break;
      default:
      printf("Consonant");
   }
}
    else
    printf("invalid");
    
   return 0;
}
   
