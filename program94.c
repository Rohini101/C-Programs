#include<stdio.h>
void CheckSmall(char ch)
{
    if(ch>='a' && ch<='z')
    {
        printf("it is a small letter ");
    }
       else
    {   
        printf("It is not a capital letter\n");
    }
}

int main()
{
    char cValue;

    printf("Enter one character : \n");
    scanf("%c",&cValue); 
    CheckSmall(cValue);

    
    
    return 0;
}