//Write a C program to demonstrate and implement:Relational operators
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values of a and b:\n");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("A is greater than B\n");
    }
    else
    {
        printf("B is greater than A\n");
    }
}