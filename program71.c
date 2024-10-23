#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iCount=0;
    int i=0;
    int *Brr=NULL;

    printf("enter number ");
    scanf("%d",&iCount);

    Brr=(int *)malloc(iCount*sizeof(int));

    for(i=0;i<iCount;i++)
    {
        scanf("%d",&Brr[i]);
    } 
    printf("elemts are:");

     for(i=0;i<iCount;i++)
    {
       printf("%d\n",Brr[i]);
    }  
    free(Brr);
    return 0;

}