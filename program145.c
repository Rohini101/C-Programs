#include<stdio.h>

int StrlenX(char *str)
{
    int iCount=0;
    while(*str!='\0')
    
    {
        iCount++;
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
    iRet=StrlenX(Arr); 
    printf("%d",iRet);


    return 0;
}