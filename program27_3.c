#include<stdio.h> 

int  FirstOcc(char *str,char ch)
{ 
    int iPos=-1; int i=0;
    while(*str!='\0')
    { 
       
        if(*str==ch)
        {
          iPos=i;
          break;
        }  
        
   i++;
   *str++;
    } 
    return iPos;
 
}


int main()
{
    char Arr[20];
    int iRet=0;
    char cValue='\0';

    printf("enter string");
    scanf("%[^'\n]s",Arr);  

    printf("enter a character");
    scanf(" %c",&cValue);


    iRet=FirstOcc(Arr,cValue);  
    printf("%d",iRet);


return 0;
   


}