#include<stdio.h>
#include<stdlib.h>
void Updator(int Arr[],int iSize)
{
    int i=0; 
  
    for(i=0;i<iSize;i++)
    {   

        Arr[i]=(Arr[i])*2;
    }
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
     printf("Enter the Elements: \n ");

    for(int i=0;i<iCount;i++)
    {
        scanf("%d",&Brr[i]);
    } 
    
    Updator(Brr,iCount);
    printf("elements aftre updation:"); 
    
    for(int i=0;i<iCount;i++)
    {
        printf("%d\n",Brr[i]);
    } 
    free(Brr);
    return 0;
}