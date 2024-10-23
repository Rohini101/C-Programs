#include<stdio.h>  

void Display(char ch)
{ 
    if(ch>='A'&& ch <='Z') 
    {
    while(ch<='Z')
    {
        printf("%c\t ",ch);
        ch++;
    }  
    }
    else if(ch>='a'&& ch<='z')
    {
    while(ch<='z') 
     {
        printf("%c\t ",ch);
        ch++;
    }  
    } 
    else 
    {
      
    }
} 



int main()
{

    char cValue='\0';
    printf("enter a character");
    scanf("%c",&cValue); 

    Display(cValue);
    return 0;


}