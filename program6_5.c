#include<stdio.h> 
void DisplayTableRev(int iNo)
{
    for(int i=10;i>=1;i--)
    {
        printf("%d\t",iNo*i);
    }
}



int main()
{
    int iValue=0;
    printf("enter number");
    scanf("%d",&iValue);
    DisplayTableRev(iValue);

    return 0;
}