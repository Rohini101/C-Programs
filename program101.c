#include<stdio.h> 
#include<string.h> 

int strlenX(char *str)
{
     int iCnt = 0;

    while(*str != '\0')
    {  
        if((*str>='A') && (*str<='Z'))
        {
        iCnt++; 
        }
        str++;
    }
    return iCnt;
}






int main()
{ 
    char Arr[50]; 
     int iRet=0;
    printf("enter a string ");
    scanf("%[^'\n']s",Arr);
    iRet=strlenX(Arr); 
    printf(" length of string is %d",iRet);

    return 0; 
}