#include<stdio.h>

int CountFrequency(char *str, char ch)   
{
    int iCnt = 0;
    while(*str != '\0')
    {   
        if(*str == ch)
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
    char cValue;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);
    
    printf("Enter the character that you want to search : \n");
    scanf(" %c", &cValue);

    iRet = CountFrequency(Arr, cValue);

    printf("frequnecy of chataers is %d",iRet);


    return 0;
}