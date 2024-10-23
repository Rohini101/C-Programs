#include<stdio.h> 
#define RET_INVALID 1
#define RET_FAIL 2
#define RET_PASS 3

int DisplayResult(float fMarks)
{
   if((fMarks < 0.0f) || (fMarks > 100.0f))        // Filter
    {   return RET_INVALID;   
    }

    if((fMarks >= 0.0f) && (fMarks < 35.0f))
    {   return RET_FAIL;   
    }
    else
    {   return RET_PASS;    
    }
}


int main()
{
    float fValue=0.0;
    int  iRet=0;

    printf("enter mark");
    scanf("%f",&fValue);

    iRet=DisplayResult(fValue); 
    if(iRet==RET_FAIL)
    {
    printf("INvalid input");
    }
    else if(iRet==RET_PASS)
    {
        printf("student id pass ");
    } 
    else if(iRet==RET_FAIL)
    {
        printf("student is fail ");
    }
    return 0;
}