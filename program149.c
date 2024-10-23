#include<stdio.h>

int CountSpaces(char *str)
{
    int iCount=0;
    while(*str!='\0')
    
    { 
        if(*str==' ')    
        { 
        iCount++; 
        }
        str++;
    }
    return iCount;
} 


int main()
{ 
    char Arr[50];
    int iRet=0;

    printf("enter a string");
    scanf("%[^'\n']s",Arr);
    iRet=CountSpaces(Arr); 
    printf(" no of spaces in the string is :%d",iRet);


    return 0;
}