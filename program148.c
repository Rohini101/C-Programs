#include<stdio.h>

int countVowels(char *str)
{
    int iCount=0;
    while(*str!='\0')
    
    { 
        if(*str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U' || *str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u'  )
        {
        iCount++; 
        }

        str++;
    }-
    return iCount;
} 


int main()
{ 
    char Arr[50];
    int iRet=0;

    printf("enter a string");
    scanf("%[^'\n']s",Arr);
    
    iRet=countVowels(Arr); 
    printf(" no of  vowels in the string is :%d",iRet);


    return 0;
}