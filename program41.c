// Input : 5
// Output :         &   &   &   &   &   
//                  *   *   *   *   *   
//                  $   $   $   $   $ 

  #include<stdio.h>  

void Display(int iNo) 
{
    int iCnt=0; 
    int i=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("&\t");

    }   
    printf("\n");
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }  
       printf("\n");
       for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("$\t");
    }  
    printf("\n");
}


int main()
{ 
    int iValue=0;
    printf("enter a number");
    scanf("%d",&iValue); 
    Display(iValue);



    return 0;
}