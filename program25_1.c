#include<stdio.h>   
int CountCapital(char *str)
{  
    int iCount=0;
    while(*str !='\0')
    {
        if(*str >='A' && *str <='Z')
        {
            iCount++;
        }
        *str++;
    } 
   return iCount;
}




int main()
{

    char arr[20]; 
    int iRet=0;
    printf("enter a string"); 

    scanf("%[^'\n']s",arr);

    iRet=CountCapital(arr);
    printf("%d",iRet); 
    return 0;
  


}