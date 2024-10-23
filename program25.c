#include<stdio.h>

int Display(int iNo)
{
   
    int iCount=0;
    if(iNo < 0)
    {
        iNo= -iNo;
    }

    while(iNo!=0)
    {
       
       iNo=iNo/10;
        iCount++;
       

    }  
    return iCount;
 

    
}


int main()
{ 
    int iValue=0;
    int iRet;
    printf("Enter a number");
    scanf("%d",&iValue);

   iRet= Display(iValue); 
   printf("%d",iRet);

    return 0;
}