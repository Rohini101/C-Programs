#include<stdio.h> 
#include<stdlib.h>

void updater(int Arr[],int iSize)
{   int i=0;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]>100)
        { 
        Arr[i]=0;
        }
    }

}

int main()
{ 
    int i=0;
    int *Brr=NULL;
    int iValue=0,iRet=0;
    printf("enter no of elements");
    scanf("%d",&iValue);

    Brr=(int *)malloc(iValue *sizeof(int)); 

    for(i=0;i<iValue;i++)
    {
        scanf("%d",&Brr[i]);
    } 

   updater(Brr,iValue);
   printf("data after updation\n");
    
    for(i=0;i<iValue;i++)
    {
        printf("%d \n",Brr[i]);
    }

  return 0;
}