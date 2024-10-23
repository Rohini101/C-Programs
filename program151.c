#include<stdio.h>
#include<stdbool.h>

bool CheckoCCurance(char *str,char ch)
{
    int iCount=0;
        bool bFlag=false;
    while(*str!='\0') 
    { 
        if(*str==ch)    
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
    char cValue='\0';


    printf("enter a string");
    scanf("%[^'\n']s",Arr); 


    printf("enter a  character:");
    scanf(" %c",&cValue);


    bRet=CheckoCCurance(Arr,cValue); 
    
   if(bRet== true)
   {
    printf("character is present ");

   }
   else 
   {
        printf("chracter is absent ");
   }

    return 0;
}