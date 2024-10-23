#include<stdio.h> 

int  Reverse(char *str)
{ 
  
  char *Start=str;
  char *End=str;
  char  temp;
  
       while(*End != '\0')
    {
        End++;
    }
    End--;

    while(Start<End)
    {
        temp=*Start;
        *Start=*End;
        *End=temp;

    
    Start++;
    End--; 
    }
     

    } 

 



int main()
{
    char Arr[20];
    int iRet=0;
  

    printf("enter string");
    scanf("%[^'\n]s",Arr);  

    Reverse(Arr);  
    printf("%s\n",Arr);

    return 0;
   
}