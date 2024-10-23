// Input : 5

    // Output :     1   2   3   4   5   *   *   *   *   *    

    #include<stdio.h>  

void Display(int iNo) 
{
    int iCnt=0; 
    int i=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d \t",iCnt);

    }  
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("* \t");
    }
}


int main()
{ 
    int iValue=0;
    printf("enter a number");
    scanf("%d",&iValue); 
    Display(iValue);



    return 0;
}