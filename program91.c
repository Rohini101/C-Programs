#include<stdio.h>
#include<stdlib.h>
void Updater(int Arr[],int iSize)
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
    
    Updater(Brr,iCount);  
    printf("After updater");
     for(int i=0;i<iCount;i++)
    {
        printf("%d",Brr[i]);
    } 

    
    free(Brr);
    return 0;
}