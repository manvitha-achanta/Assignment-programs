#include<stdio.h>
int main()
{
 float weight,height,bmi;
 printf("enter weight and height:");
 scanf("%f%f",&weight,&height);
 if(weight<=0||height<=0)
 {
     printf("invalid input");
     
 }
 bmi=weight/(height*height);
 printf("bmi=%2f\n",bmi);
 if(bmi<18.5)
   printf("underweight");
 else if (bmi<25)
   printf("normal");
 else if(bmi<30)
   printf("overweight");
 else
   printf("obese");
}

      
