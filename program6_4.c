#include<stdio.h> 

void DisplayTable(int iNo)
{
    int i=0;
    for(i=1;i<=10;i++)
    {
        printf("%d\t ",iNo*i);
    }
}


int main()
{
    int iValue=0;
    printf("enter  numbe r");
    scanf("%d",&iValue);
    DisplayTable(iValue);



    return 0;
}