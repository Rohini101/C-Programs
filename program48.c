// Input : 5
//             -5   5   -4  4  -3   3  -2   2  -1   1
  #include<stdio.h>  

void Display(int iNo) 
{
    int iCnt=0; 
    int i=0;
    for(iCnt=-iNo;iCnt<0;iCnt++)
    {
        printf("%d \t %d \t ", iCnt,-iCnt);

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