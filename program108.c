#include<stdio.h> 
#include<string.h> 
#include<stdbool.h>

int CheckOccurance(char *str,char ch)
{
  
 bool bFlag=false;
 int iCnt=1;

    while(*str != '\0')
    {  
        if(*str==ch)
        {
        bFlag=true; 
        
        break;
        }
        iCnt++;
        str++; 

      
    }
      
        if(bFlag==true)
        {
       return iCnt;
        }
        else
        {
            return -1;

        }
    
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
       if(iRet == -1)
    {
        printf("There is no such letter\n");
    }
    else
    {
        printf("Letter occurs at the position %d\n",iRet);
    }
   
    return 0; 
}