#include<stdio.h>
int main()
{
    int marks;
    printf("enter your marks:");
    scanf("%d",&marks);
    if(marks<0||marks>100)
       printf("invalid marks");
    else if(marks>=90)
       printf("grade O");
    else if(marks>=80)
       printf("grade A+");
    else if(marks>=70)
       printf("grade A");
    else if(marks>=60)
       printf("grade B");
    else if(marks>=50)
       printf("grade C");
    else
      printf("Fail");
      
}