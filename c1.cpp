
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the values of A,B and C:\n");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    printf("The value of Discriminant is:%d\n",d);
}