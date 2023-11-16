// Write a program in c to find the area of a triangle using call by reference in function.
#include<stdio.h>
int area(int *b,int *h)
{
    int area=(*b**h)/2;
    printf("%d",area);
}
int main()
{
    int a=10;
    int b=5;
    area(&a,&b);
}