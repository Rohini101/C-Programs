#include<stdio.h> 

int  DisplayRange(int iStart,int iEnd)
{
  int i=0; 
 int iSum=0; 
   

   if(((iEnd<0 || iStart<0)))
  {
    printf("Invalid range");
  } 
  else 
  { 
   
     for(i=iStart;i<=iEnd;i++)
    { 
      iSum=iSum+i;
      
     
    } 
  
  
  } 
    return iSum;  
}

int main()
{ 
  int iValue1=0;
  int iValue2=0;  
  int iRet=0;
  
  printf("enter a staring number");
  scanf("%d",&iValue1); 

  printf("enter a ending  number");
  scanf("%d",&iValue2); 
  iRet=DisplayRange(iValue1,iValue2);
  printf("%d ",iRet);

  return 0;
}