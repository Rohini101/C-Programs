#include<stdio.h> 

int  SumFactors(int iNo)
{
    int iCnt=0;  
    int iSum=0;
    printf("Factors of%d are ",iNo);
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        
        if(iNo%iCnt==0)
        { 
            iSum=iSum+iCnt;
          
        }
    } 
    return iSum;
}


int main()
{ 
    int iValue=0; 
    int iRet=0;
    printf("enter a number");
    scanf("%d",&iValue);
   iRet= SumFactors(iValue); 
    printf("sum os factors is %d",iRet);

    return  0;

}