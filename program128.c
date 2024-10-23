#include<stdio.h> 
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{  int i=0;
  int iMax=0;
  iMax=Arr[0];
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]>iMax)
        {
            iMax=Arr[i];
        }
        
    }
 return iMax;
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

    iRet=Maximum(Brr,iValue);
    printf("Largest no is:%d",iRet);

  return 0;
}