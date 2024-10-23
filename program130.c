#include<stdio.h> 
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{  int i=0;
  int iMin=0;
  iMin=Arr[0];
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]<iMin)
        {
            iMin=Arr[i];
        }
        
    }
 return iMin;
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

    iRet=Minimum(Brr,iValue);
    printf("minimum no is:%d",iRet);

  return 0;
}