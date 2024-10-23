#include<stdio.h>
#include<stdbool.h>


bool checkVowel(char *str)
{  
  
    while(*str !='\0')
    {
        if(*str=='a' || *str=='e' || *str=='i'||   *str=='o'|| *str=='u'|| *str=='A'|| *str=='E'|| *str=='I'|| *str=='O'|| *str=='U')
        { 
            return true;
        
        }

        *str++;
    } 

}




int main()
{

    char arr[20]; 
    bool  bRet=false;
    printf("enter a string \n"); 

    scanf("%[^'\n']s",arr);

   bRet=checkVowel(arr); 
   if(bRet==true)
   {
    printf("string contians cowels");
   } 
   else 
   {
    printf("string not  contians cowels");
   }
  
    
    return 0;
  


}