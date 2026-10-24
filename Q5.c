#include<stdio.h>
int main()
{
    int age,credit;
    float income;
    printf("Enter the age ,income and credit values");
    scanf("%d %f %d",&age,&income,& credit);
    if(age<21||age>60)
    printf("loan rejected:age not in between 21 to 60");
    else if(income<25000)
    printf("Loan rejected:inome below 25000");
    else if(credit<700)
    printf("loan rejected:credit score below 700");
    else
    printf("loan approved");
}