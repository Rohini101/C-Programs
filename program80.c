#include<stdio.h>

int Display(int ptr[], int iSize)
{
    int i = 0;
    int iSum=0;

     
    for(i = 0; i < iSize; i++)
    {
       iSum=iSum+ptr[i];
    }
    return iSum;
}

int main()
{
    int Arr[5];
    int iRet=0; 
    int i=0;
    printf("Enter the elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&Arr[i]);
    }


    iRet=Display(Arr,5); 
    printf("%d",iRet);

    return 0;
}