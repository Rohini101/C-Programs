#include<stdio.h>

int StrlenCapital(char *str)
{
    int iCount=0;
    while(*str!='\0')
    
    { 
        if(*str>='A' && *str<='Z')  // 65  90 
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
    iRet=StrlenCapital(Arr); 
    printf(" no of capital letters in the string is :%d",iRet);


    return 0;
}