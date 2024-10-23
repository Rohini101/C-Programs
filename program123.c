#include<stdio.h>
#include<stdlib.h>

int  CountOdd(int Arr[], int iSize)
{
    int i = 0,iCount=0;
  

      
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i]%2!=0)
        {
            iCount++;
        }
       
    }
return iCount;
}

int main()
{
    int *Brr=NULL;
    int i=0;
    int iValue=0;
    int iRet=0;
    printf("enter no of elements that");
    scanf("%d",&iValue); 

    Brr = (int *)malloc(iValue * sizeof(int));



   printf("enter elements:");
    for(i=0;i<iValue;i++)
    {
        scanf("%d",&Brr[i]);
    } 
    iRet=CountOdd(Brr,iValue);   
    printf("no of odd are:%d",iRet);
    free(Brr);

    return 0;
} 
