#include<stdio.h> 
int Add(int iNo1,int iNo2) 
{
    int Ans=0;
    Ans=iNo1+iNo2;
    return Ans;
}

int main() 
{
 int iValu1=0;
 int iValue2=0;
 int iRet=0;

 printf("enter a number"); 
 scanf("%d",&iValu1);

 printf("enter a number");
 scanf("%d",&iValue2); 

 iRet=Add(iValu1,iValue2);

 printf("%d",iRet);
 return 0;
}