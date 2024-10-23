#include<stdio.h> 
#include<string.h>




int main()
{ 
    char Arr[50]; 
     int iRet=0;
    printf("enter a string ");
    scanf("%[^'\n']s",Arr);
    iRet=strlen(Arr); 
    printf("%d",iRet);

    return 0; 
}