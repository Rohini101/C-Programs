// problem statement: accept temperature and convert it into celcius :
// input :10
// output: -12.2222  
// 1 celcius=(fahrenheit-32)*(5/9)  
 
 #include<stdio.h>
 double FhtoCs( float fNo)
 {
   double fNo1=(double)fNo;
    
    double celcius=0.0;
    celcius = (fNo1-32.0)*(5.0/9.0);
    return celcius;
 }


 int main()
 {

     float fValue=0.0f;
     double dRet=0.0;
     printf(" Enter the temperature in fahrenheit :");
     scanf("%f",&fValue);   

     dRet=FhtoCs(fValue);
     printf("Fahrenheit to celcius is %f",dRet); 

     return 0;
 }