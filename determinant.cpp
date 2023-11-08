//Write a C program to check the discriminant of an equation D=(b*b)-(4*a*c) and check whether the roots are real or not.
#include<stdio.h>
int main()
{
    int a,b,c,D,s,q;
    printf("Enter the values of a,b and c:\n");
    scanf("%d %d %d",&a,&b,&c);
    s=(b*b);
    q=-(4*a*c);
    D=s-q;
    if(D>0)
    {
        printf("Both the roots are real\n");
    }
    if(D==0)
    {
        printf("One of the roots are real:\n");
    }
    if(D<0)
    {
        printf("Both the roots are imaginary");
    }
    return 0;
}