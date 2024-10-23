// Input : 5
//              5   *    4   *    3   *    2   *    1   *

  #include<stdio.h>  

void Display(int iNo) 
{
    int iCnt=0; 
    
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t * \t",iCnt);

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