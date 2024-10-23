#include<stdio.h> 

int main()
{ 
    int i=0;
    int j=0; 

    for(i=4;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("*\t");
        } 
        printf("\n");
    }



    return 0;
}

