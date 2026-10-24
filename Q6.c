#include<stdio.h>
int main()
{
    int id,password;
    printf("Enter your id and password:");
    scanf("%d%d",&id,&password);
    if(id!=101)
    printf("user not found");
    else if(password==4321)
    printf("login successful");
    else
    printf("incorrect password");
}