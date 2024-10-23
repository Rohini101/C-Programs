#include<stdio.h>
#include<stdlib.h>

int  CountFrequency(int Arr[], int iSize,int iNo)
{
    int i = 0,iCount=0;
  

      
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i]==iNo)
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
     int iValue2=0;
    int iRet=0;
    printf("enter no of elements that");
    scanf("%d",&iValue); 
 
    Brr = (int *)malloc(iValue * sizeof(int));



   printf("enter elements:");
    for(i=0;i<iValue;i++)
    {
        scanf("%d",&Brr[i]);
    }  
      printf("enter no of elements that u want to search");
    scanf("%d",&iValue2); 
    iRet=CountFrequency(Brr,iValue,iValue2);   
    printf("fqequency of %d is :%d",iValue2,iRet);
    free(Brr);

    return 0;
} 
