#include<stdio.h> 
#include<string.h> 

int CountSpaces(char *str)
{
     int iCnt = 0;

    while(*str != '\0')
    {  
        if(*str==' ')
        {
        iCnt++; 
        }
        str++;
    }
    return iCnt;
}






int main()
{ 
    char Arr[100]; 
     int iRet=0;
    printf("enter a string ");
    scanf("%[^'\n']s",Arr);
    iRet=CountSpaces(Arr); 
    printf(" length of string is %d",iRet);

    return 0; 
}