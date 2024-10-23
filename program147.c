#include<stdio.h>

int StrlenSmall(char *str)
{
    int iCount=0;
    while(*str!='\0')
    
    { 
        if(*str>='a' && *str<='z')    // 97   122 
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
    iRet=StrlenSmall(Arr); 
    printf(" no of small letters in the string is :%d",iRet);


    return 0;
}