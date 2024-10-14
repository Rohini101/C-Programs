#include<stdio.h>

int Display(int iNo)
{

    for(int i=-iNo;i<=iNo;i++)
    {
        printf("%d\t",i);
      
    }
}

int main()
{ 
    int iValue=0;

    printf("enter nuber :");
    scanf("%d",&iValue);
    Display(iValue);



    return 0 ;
}