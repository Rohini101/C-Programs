#include<stdio.h> 
#include<stdbool.h>

bool CheckChar(char *str,char ch)
{ 
    int iCount=0;
    while(*str!='\0')
    {
        if(*str==ch)
        {
            return true;
        } 

   *str++;
    }
 
}


int main()
{
    char Arr[20];
    bool bRet=false;
    char cValue='\0';

    printf("enter string");
    scanf("%[^'\n]s",Arr);  

    printf("enter a character");
    scanf(" %c",&cValue);


    bRet=CheckChar(Arr,cValue); 

    if(bRet== true)
    {
        printf("given char is present in the string ");
    } 
    else 
    {
        printf("given char is absent in the string ");
    }

   


}