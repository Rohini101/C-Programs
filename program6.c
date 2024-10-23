#include<stdio.h> 

int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))        // Filter
    { 
        
        return 1;
    }

    if(fMarks>=35.0&& fMarks<=100.0)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}


int main()
{
    float fValue=0.0;
    int  iRet=0;

    printf("enter mark");
    scanf("%f",&fValue);

    iRet=DisplayResult(fValue); 
    if(iRet==1)
    {
    printf("INvalid input");
    }
    else if(iRet==2)
    {
        printf("student id pass ");
    } 
    else if(iRet==3)
    {
        printf("student is fail ");
    }
    return 0;
}