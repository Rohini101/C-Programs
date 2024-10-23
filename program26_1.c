#include<stdio.h>

void strlowerx(char *str)   
{ 
    while(*str!=0)
    {
        if(*str>='A'&& *str<='Z')
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

    strlowerx(Arr);

    printf("updated string is : %s\n",Arr);

    return 0;
} 