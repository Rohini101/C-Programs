#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iSize) 
{
     int i = 0;
    int iSum = 0;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;

}

int main()
{
    int iCount=0;
    int i=0;
   int *Brr=NULL; 
   int iRet=0;

   printf("enter a number");
   scanf("%d",&iCount);
   Brr=(int *)malloc(iCount* sizeof(int)); 

   for(i=0;i<iCount;i++)
   {
    scanf("%d",&Brr[i]);

   }  
   printf("entred elemnts are");
   for(i=0;i<iCount;i++)
   {
    printf("%d\n",Brr[i]);

   } 
   iRet=Addition(Brr,iCount);
   printf(" Adition of elements are %d \n",iRet); 

   free(Brr);
   return 0;



}