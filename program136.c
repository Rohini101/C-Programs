#include<stdio.h> 
#include<stdlib.h>

void updater(int Arr[],int iSize)
{   int i=0;

    
    for(i=iSize-1;i>=0;i--)
    {
        printf("%d \n",Arr[i]);
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


  return 0;
}