/*
    iRow = 4
    iCol = 4

    *   #   *   #
    *   #   *   #
    *   #   *   #
    *   #   *   #
*/ 
 
 #include<stdio.h>

 void Display( int iRow,int iCols)
 {
    int i =0;
    int j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCols;j++)
        { 
            if(j%2==0) 
            {
            printf("# \t");  
            }
            else
            {
                 printf("* \t"); 
            }

        } 
        printf("\n");
    }
 }


 int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);
    
    Display(iValue1, iValue2);// Display(3,4);

    return 0;
}