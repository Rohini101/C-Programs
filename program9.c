/*
    0 to 35     Fail                            (35 is exclusive)
    35 to 50    Pass class                      (50 is exclusive)
    50 to 60    Second class                    (60 is exclusive)
    60 to 75    First class                     (75 is exclusive)
    75 to 100   First class with distinction    (100 is inclusive)
*/




#include<stdio.h> 
#define RET_INVALID 1
#define RET_FAIL 2
#define RET_PASSCLASS 3
#define RET_SECONDCLASS 4
#define RET_FIRSTCLASS 5
#define RET_DISTINCTION 6


int DisplayResult(float fMarks)
{
   if((fMarks < 0.0f) || (fMarks > 100.0f))        // Filter
    {   return RET_INVALID;   
    }

    if((fMarks >= 0.0f) && (fMarks < 35.0f))
    {   return RET_FAIL;   
    }
    else if(fMarks>=35&& fMarks<50)
    {
         return RET_PASSCLASS; 

    }
    else if(fMarks>=50&& fMarks<60)
    {
    return RET_SECONDCLASS ;

    } 
   
    else if(fMarks>=60&& fMarks<75)
    {
        return RET_FIRSTCLASS;
    } 
    else if(fMarks>=75&& fMarks<100)
    {return RET_DISTINCTION;
        
    }
}


int main()
{
    float fValue=0.0;
    int  iRet=0;

    printf("enter mark");
    scanf("%f",&fValue);

    iRet=DisplayResult(fValue);  

    switch(iRet)
    {
        case RET_FAIL: 
              printf(" Student is fail"); 
              break; 
        case RET_PASSCLASS:
               printf(" student is in pass class");
               break;
        case RET_SECONDCLASS:
               printf("student in second class");
        case RET_FIRSTCLASS:
               printf("Student is in first class");
               break;
        case RET_DISTINCTION:
               printf(" student is in  dictinction");
               break;
        case  RET_INVALID:
               printf("invalid input");
               break;
    }
   
    return 0;
} 
