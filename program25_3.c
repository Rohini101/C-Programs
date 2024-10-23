#include<stdio.h>

int Difference(char *str)
{  
    int iSmallCount=0;
    int iCapCount=0;
    while(*str !='\0')
    {
        if(*str >='a' && *str <='z')
        {
            iSmallCount++;
        }
        else if(*str >='A' && *str <='Z') 
        {
            iCapCount++;
        }
        *str++;
    } 
   return iSmallCount-iCapCount;
}




int main()
{

    char arr[20]; 
    int iRet=0;
    printf("enter a string \n"); 

    scanf("%[^'\n']s",arr);

    iRet=Difference(arr);
    printf("%d",iRet); 
    return 0;
  


}