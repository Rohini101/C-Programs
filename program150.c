#include<stdio.h>
#include<stdbool.h>

bool CheckoCCurance(char *str)
{
    int iCount=0;
        bool bFlag=false;
    while(*str!='\0') 
    { 
        if(*str=='w')    
        { 
         bFlag=true;
         break;
        }
        
        str++;
    } 
    return bFlag;

} 


int main()
{ 
    char Arr[50];
    bool bRet=false;

    printf("enter a string");
    scanf("%[^'\n']s",Arr);
    bRet=CheckoCCurance(Arr); 
    
   if(bRet== true)
   {
    printf("W is present ");

   }
   else 
   {
        printf("W is absent ");
   }

    return 0;
}