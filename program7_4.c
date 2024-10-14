#include<stdio.h> 

int OddFact(int iNo)
{
    int i=0;
    int iFact=1;
    for(i=iNo;i>1;i--)
    {
        if(i%2==1)
        {
            iFact=iFact*i;
        }

    } 
    return iFact;
}


int main()
{ 
   int iValue=0;
   int iRet=0;

   printf("enter number");
   scanf("%d",&iValue);
   iRet=OddFact(iValue);
   printf("%d",iRet);


    return 0;
}