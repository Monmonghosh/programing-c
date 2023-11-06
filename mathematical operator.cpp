//Write a program in C to take two inputs from the user and perform all the mathematical operations. The two inputs should be passed as an argument to an user defined function named "operations".
#include<stdio.h>
int operations(int a,int b)
{
    int c=a+b;
    int d=a-b;
    int e=a*b;
    int f=a/b;
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
}
int main()
{
    int a=0,b=0;
    printf("Enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    operations(a,b);
}