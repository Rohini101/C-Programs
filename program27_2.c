#include<stdio.h> 

int  CheckChar(char *str,char ch)
{ 
    int iCount=0;
    while(*str!='\0')
    {
        if(*str==ch)
        {
          iCount++;
        } 

   *str++;
    } 
    return iCount;
 
}


int main()
{
    char Arr[20];
    int iRet=false;
    char cValue='\0';

    printf("enter string");
    scanf("%[^'\n]s",Arr);  

    printf("enter a character");
    scanf(" %c",&cValue);


    iRet=CheckChar(Arr,cValue);  
    printf("%d",iRet);


return 0;
   


}