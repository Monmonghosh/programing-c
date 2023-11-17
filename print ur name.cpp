//Write a program in c to print your name n number of times by taking the value of n as a input from the user.
#include<stdio.h>
int main()
{
    int n,a=1;
    printf("Enter the number of times you want to print your name:");
    scanf("%d",&n);
    do
    {
        printf("My name is Moon!\n");
        a++;
    }
    while(n>=a);
}