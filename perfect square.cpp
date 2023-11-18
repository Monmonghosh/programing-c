//Write a program in c to check whether a number is a perfect square or not.
#include<stdio.h>
int main()
{
    int a,b,sq;
    printf("Enter a number:");
    scanf("%d",&sq);
    a=sq;
    b=a*a;
    if(b==sq)
        printf("It is a perfect square!");
    else
        printf("It is not a perfect square!");
}