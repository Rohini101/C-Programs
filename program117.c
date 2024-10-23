#include<stdio.h>
#include<stdlib.h>

int  SumArray(int Arr[], int iSize)
{
    int i = 0;
    int iSum=0;

      
    for(i = 0; i < iSize; i++)
    {
        iSum=iSum+Arr[i];
       
    }
    return iSum;
}

int main()
{
    int *Brr=NULL;
    int iRet=0,i=0;
    int iValue=0;
    printf("enter no of e;mets that");
    scanf("%d",&iValue); 

    Brr = (int *)malloc(iValue * sizeof(int));



   printf("enter elements:");
    for(i=0;i<iValue;i++)
    {
        scanf("%d",&Brr[i]);
    } 
    iRet=SumArray(Brr,iValue);  
    printf("Addition is : %d",iRet); 
    free(Brr);

    return 0;
} 
