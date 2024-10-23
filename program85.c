#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
    int i=0; 
    int iMin=Arr[0]; 
    for(i<0;i<iSize;i++)
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
    int iCount=0;
    int *Brr=NULL; 
    int i=0;



    
    int iRet=0;

    printf("Enter a number");
    scanf("%d",&iCount);

    Brr=(int *)malloc(iCount*sizeof(int)); 
     printf("Enter the Elements: ");

    for(int i=0;i<iCount;i++)
    {
        scanf("%d",&Brr[i]);
    } 
    
    iRet=Maximum(Brr,iCount);
    printf("largest no is :%d",iRet);
    free(Brr);
    return 0;
}