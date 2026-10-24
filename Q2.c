#include<stdio.h>
int main()
{
float length,breadth;
printf("Enter length and breadth values");
scanf("%f%f",&length,&breadth);
printf("area =%2f",length*breadth);
printf("\nperimeter= %2f",2*(length+breadth));
}