#include<stdio.h>
#include<stdlib.h>
int  CountSearch(int Arr[], int iSize,int iNo)
{ 
    int i=0; 
    int iCount=0;
    
    for(i=0;i<iSize;i++)
    {
        if((Arr[i]==iNo))
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
    int iValue=0;

    printf("Enter number of elements that you want : \n");
    scanf("%d",&iCount); 
    
   

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    } 
     printf("Enter number of elements that you want to count : \n");
    scanf("%d",&iValue);

    iRet=CountSearch(Brr,iCount,iValue);
    printf("frequency of that number  is %d ",iRet);
    free(Brr);

    return 0;
}
