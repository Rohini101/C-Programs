// Input : 5
//        A     *   B    *      C      *        D       *       E       *

  #include<stdio.h>  

void Display(int iNo) 
{
    int iCnt=0; 
    char ch='\0';
    for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c \t * \t", ch);
        

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