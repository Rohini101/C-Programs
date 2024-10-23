#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool CheckNumber(int Arr[], int iSize,int iNo)
{ 
    int i=0; 
    int iCount=0;
    bool bFlag=false;
    
    for(i=0;i<iSize;i++)
    {
        if((Arr[i]==iNo))
        {
            bFlag=true;
            break;
        } 
       

    }
    
    return bFlag;
}

int main()
{   
    int iCount = 0, i = 0;
    int *Brr = NULL;
    int iValue=0;
    bool bRet=false;

    printf("Enter number of elements that you want : \n");
    scanf("%d",&iCount); 
    
   

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    } 
     printf("Enter number of elements that you want to count : \n");
    scanf("%d",&iValue);

    bRet=CheckNumber(Brr,iCount,iValue);
   
   if(bRet==true)
   { 
    printf("given number is present");

   }
   else 
   { 
     printf("given number is not Found ");

   }
    free(Brr);

    return 0;
}
