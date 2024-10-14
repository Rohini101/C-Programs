#include<stdio.h> 
int DollorIntoInr(int iAmount)
{ 
    int iRup;
    iRup=iAmount*70; 
    return iRup;
}

int main()
{ 
    int iValue=0;
    printf("enter Amount in dollor");
    scanf("%d",&iValue);
    int iRet=0;
    iRet=DollorIntoInr(iValue);
    printf("%d",iRet);


    return 0;
}