#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckNo(int Arr[], int iSize,int iNo)
{
    int i = 0,iCount=0;
    bool bFlag=false;
  

      
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i]==iNo)
        {
         bFlag = true;
          break;
        }
      
       
    } 
return bFlag;

}

int main()
{
    int *Brr=NULL;
    int i=0;
    int iValue=0;
     int iValue2=0;
    bool bRet=false;
    printf("enter no of elements that");
    scanf("%d",&iValue); 
 
    Brr = (int *)malloc(iValue * sizeof(int));



   printf("enter elements:");
    for(i=0;i<iValue;i++)
    {
        scanf("%d",&Brr[i]);
    }  
      printf("enter no of elements that u want to search");
    scanf("%d",&iValue2); 
    bRet=CheckNo(Brr,iValue,iValue2);   

    if(bRet==true)
    {
     printf("Given no is present ");
    }
    else
    {
       printf("Given no is Absent ");
    }



   
    free(Brr);

    return 0;
} 
