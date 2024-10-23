#include<stdio.h> 
#include<string.h> 
#include<stdbool.h>

int CheckOccurance(char *str,char ch)
{

 int iCnt=0; 


    while(*str != '\0')
    {  
        if(*str==ch)
        {  
                   iCnt++;
        
        }
 
        str++; 

      
    }
      
       return iCnt;
    
}

int main()
{ 
    char Arr[100];  
    char cValue='\0';
 int  iRet=false;
    printf("enter a string ");
    scanf("%[^'\n']s",Arr); 

    printf("enter a character that u want to serach ");
    scanf(" %c",&cValue);

    iRet=CheckOccurance(Arr,cValue);  
   
        printf("Letter occurs at the position %d\n",iRet);
   
    return 0; 
}