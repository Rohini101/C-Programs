#include<stdio.h>
void DisplayRange(int iStart, int iEnd)
{
    int i=0; 
    if(iStart>iEnd)
    {
        printf("invalid range");
    }
    for(i=iEnd;i>iStart;i--)
    {
        printf("%d\t",i);
    }
}

int main()
{ 
    int iValue1=0;
    int iValue2=0; 

    printf("enter a starting number");
    scanf("%d",&iValue1); 

    printf("enter a ending number");
    scanf("%d",&iValue2); 

    DisplayRange(iValue1,iValue2);

    return 0;
} 