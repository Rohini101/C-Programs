#include<stdio.h>

int main()
{
    char Arr[50];

    printf("entre a string ");
    scanf("%[^'\n']s",Arr);
    printf("Hello : %s\n",Arr);
    return 0;
}