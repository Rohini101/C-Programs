#include<stdio.h>
#include<stdbool.h>

void UpdateString(char *str )   
{
   

    while(*str != '\0')
    {   
        if(*str==' ')
        {
         *str='*';
        } 
        str++;
    }
}

int main()
{
    char Arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);
    
   

    UpdateString(Arr); 

    printf("%s",Arr);

    return 0;
} 
