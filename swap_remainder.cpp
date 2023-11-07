//Write a program in C such that the values of the variables a and b are taken as an input from the user and after the division operation value of variable b should get stored in a and the remainder should get stored in b.
#include<stdio.h>
int main()
{
    int a,b,c=0,d=0,r=0;
    printf("Enter the values of a and b:\n");
    scanf("%d %d",&a,&b);
    d=a/b;
    r=a%b;
    c=b;
    a=c;
    b=r;
    printf("The new value of a is:%d\n",a);
    printf("The remainder stored in b:%d\n",b);
}