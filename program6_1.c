#include<stdio.h> 

void Number(int iNo)
{
    if(iNo<50)
    {
      printf("small");
    } 
     if(iNo>50 && iNo<100)
    {
        printf("medium ");
        
    }
     if(iNo>=100)
    {
         printf("Large");
    }
}



int main()
{ 
    int iValue=0;
    printf("entre number ");
    scanf("%d",&iValue);
    Number(iValue);


    return 0;
}