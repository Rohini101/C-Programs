#include<stdio.h> 

int CountSpaces(char *str)
{ 
    int iCount=0;
    while(*str!='\0')
    {
        if(*str==' ')
        {
            iCount++;
        }
   *str++;
    }
  return iCount;
}


int main()
{
    char Arr[20];
    int iRet=0;

    printf("enter string");
    scanf("%[^'\n]s",Arr); 
    iRet=CountSpaces(Arr);

    printf("count of white spaces is:%d",iRet);


}