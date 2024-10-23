#include<stdio.h>
#include<stdlib.h>

void  EvenDisplay(int Arr[], int iSize)
{
    int i = 0;
  

      printf("Even numbers:");
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i]%2==0)
        {
            printf("%d\n",Arr[i]);
        }
       
    }

}

int main()
{
    int *Brr=NULL;
    int i=0;
    int iValue=0;
    printf("enter no of e;mets that");
    scanf("%d",&iValue); 

    Brr = (int *)malloc(iValue * sizeof(int));



   printf("enter elements:");
    for(i=0;i<iValue;i++)
    {
        scanf("%d",&Brr[i]);
    } 
    EvenDisplay(Brr,iValue);  
    free(Brr);

    return 0;
} 
