#include<stdio.h>
#include<stdlib.h>
int  CountDivisible(int Arr[], int iSize)
{ 
    int i=0; 
    int iCount=0;
    
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]%5==0)
        {
            iCount++;
        }

    }
    return iCount;
}

int main()
{   
    int iCount = 0, i = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter number of elements that you want : \n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet=CountDivisible(Brr,iCount);
    printf("frequency of Divisible by 5  is %d ",iRet);
    free(Brr);

    return 0;
}
