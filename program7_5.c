#include<stdio.h>

int EvenOddDiffFact(int iNo)
{
    int i=0;
    int iFact1=1;
      int iFact2=1;
    for(i=iNo;i>=1;i--)
    {
        if(i%2==0)
        {
            iFact1=iFact1*i;
        }
    } 
     for(i=iNo;i>=1;i--)
    {
        if(i%2==1)
        {
            iFact2=iFact2*i;
        }
    }

  return iFact1-iFact2;
}

int main()
{
 
   int iValue=0; 
   printf("entre a number");
   scanf("%d",&iValue);
   int iRet=0;
   iRet=EvenOddDiffFact(iValue); 
   printf("%d",iRet);



    return 0;
}