// Input : 5
// Output : 0   1   2   3   4   5  

  #include<stdio.h>  

void Display(int iNo) 
{
    int iCnt=0; 
    int i=0;
    for(iCnt=;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);

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