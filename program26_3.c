#include<stdio.h>

void strUpperx(char *str)   
{ 
    while(*str!=0)
    {
        if(*str>='a'&& *str<='z')
        {
            *str=(*str)-32;
        } 
        else  if(*str>='A'&& *str<='Z')
        {
            *str=(*str)+32;
        } 

        *str++;
    }
  

}

int main()
{
    char Arr[100];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strUpperx(Arr);

    printf("updated string is : %s\n",Arr);

    return 0;
} 