#include<stdio.h>

int  SumArray(int ptr[], int iSize)
{
    int i = 0;
    int iSum=0;

      
    for(i = 0; i < iSize; i++)
    {
        iSum=iSum+ptr[i];
       
    }
    return iSum;
}

int main()
{
    int Arr[5];
    int iRet=0,i=0; 

printf("enter elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&Arr[i]);
    } 



    iRet=SumArray(Arr,5);  
    printf("Addition is : %d",iRet);

    return 0;
} 
