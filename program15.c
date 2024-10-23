// write a program to calulate tickect price on age..if age between 0-4 tickect is free, if age is between 4to 10 ticket price is 900, if age is betwenn 10 to 50 price is 2k and age above 50 then price will be 500

#include<stdio.h> 
int calTicketPrice(int iAge)
{ 
    if(iAge<=4)
    {
    return 0;
    } 
    else if(iAge>4 && iAge<=10)
    {
      return 900;
    } 
    else if(iAge>10 && iAge<=50)
    { 
        return 2000;

    }
    else if(iAge>50)
    { 
        return 500;

    }
 

}


int main()
{ 
    int  iValue=0;
    int iRet=0;

    printf("entre a age ");
    scanf("%d",&iValue);

    iRet=calTicketPrice(iValue);
    printf("price of ticket is %d",iRet);


    return 0;
}