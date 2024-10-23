#include<stdio.h>
#include<stdlib.h>

int  SumOdd(int Arr[], int iSize)
{
    int i = 0;
    int iSum=0;

      
    for(i = 0; i < iSize; i++)
    {  
        if(Arr[i]%2!=0)
        { 
        iSum=iSum+Arr[i]; 
        }
       
    }
    return iSum;
}

int main()
{
    int *Brr=NULL;
    int iRet=0,i=0;
    int iValue=0;
    printf("enter no of elmets that");
    scanf("%d",&iValue); 

    Brr = (int *)malloc(iValue * sizeof(int));



   printf("enter elements:");
    for(i=0;i<iValue;i++)
    {
        scanf("%d",&Brr[i]);
    } 
    iRet=SumOdd(Brr,iValue);  
    printf("Addition of odd number is : %d",iRet); 
    free(Brr);

    return 0;
} 
