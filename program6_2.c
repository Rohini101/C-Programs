#include<stdio.h> 
void Display(int iNo)
{ 
    if(iNo<0)
    {
        iNo=-iNo;
    }
    switch(iNo)
    { 
        case 0 :
              printf("Zero");
              break; 
        case 1:
              printf("One");
        case 2 :
              printf("Two ");
              break;  
        case 3:
              printf("three ");
              break;   
              
        case 4 :
              printf(" Four");
              break;  
        case 5 :
              printf("Five ");
              break;   
              
        case 6 :
              printf("six ");
              break; 
        case 7:
              printf("seven ");
        case 8:
              printf("eight ");
              break;  
        case 9 :
              printf("nine ");
              break;   
            
        default :
             printf(" invalid input");
             break;



    }

}


int main()
{ 
    int iValue=0;
    printf("enter number");
    scanf("%d",&iValue);
    Display(iValue);



    return 0;
}