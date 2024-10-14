#include<stdio.h>

int EvenFact(int iNo)
{
    int i=0;
    int iFact=1;
    for(i=iNo;i>=1;i--)
    {
        if(i%2==0)
        {
            iFact=iFact*i;
        }
    }
  return iFact;
}

int main()
{
 
   int iValue=0;
   printf("entre a number");
   scanf("%d",&iValue);
   int iRet=0;
   iRet=EvenFact(iValue); 
   printf("%d",iRet);



    return 0;
}