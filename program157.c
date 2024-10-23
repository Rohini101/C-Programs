#include<stdio.h>

void Display(char *str)   
{
    int iCnt = 0;

    for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {   
        printf("%c",str[iCnt]);
    }
}

int main()
{
    char Arr[100];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
} 
