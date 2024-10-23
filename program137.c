#include<stdio.h> 
#include<stdlib.h>

void updater(int Arr[],int iSize)
{   
    int iStart = 0, iEnd = 0, Temp = 0;

    iStart = 0;
    iEnd = iSize -1;

    while(iStart < iEnd)
    {
        Temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = Temp;

        iStart++;
        iEnd--;
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