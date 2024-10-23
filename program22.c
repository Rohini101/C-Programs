// Time Complexity: n/2
#include<stdio.h> 

void DisplayFactors(int iNo)
{
    int iCnt=0; 
    printf("Factors of %d are ",iNo);
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        
        if(iNo%iCnt==0)
        {
            printf(" %d \t ",iCnt);
        }
    }
}


int main()
{ 
    int iValue=0;
    printf("enter a number");
    scanf("%d",&iValue);
    DisplayFactors(iValue);

    return  0;

}