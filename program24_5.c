#include<stdio.h>  

void Display(char ch)
{ 
   
   printf(" Decimal :%d \n",ch);
   printf("Hexadecimal: %x\n",ch);
   printf(" oCtal:%o\n",ch);

} 



int main()
{

    char cValue='\0';
    printf("enter a character");
    scanf("%c",&cValue); 

    Display(cValue);
    return 0;


}