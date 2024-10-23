#include<stdio.h> 

int  countFactors(int iNo)
{
    int iCnt=0;  
    int iSum=0; 
    int iCount=0;
    

    for(iCnt=1;iCnt<iNo;iCnt++)   // Time Complexity: n
    {
        
        if(iNo%iCnt==0)
        { 
            iCount++;
          
        }
    } 
    return iCount;
}


int main()
{ 
    int iValue=0; 
    int iRet=0;
    printf("enter a number");
    scanf("%d",&iValue);
   iRet= countFactors(iValue); 
    printf(" number of factors are %d",iRet);

    return  0;

}