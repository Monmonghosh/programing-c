
//Write a program in C to check if the number is an armstrong number using function.
#include <stdio.h>
int armstrong(int num)
{
    int ornum=num;
    int rder,r=0;
    while(ornum!=0)
    {
        rder=ornum%10;
        r=r+rder*rder*rder;
        ornum=ornum/10;
    }
    if(r==num)
    {
        printf("%d is an Armstrong number.", num);
    }
    else
    {
        printf("%d is not an Armstrong number.", num);
    }
}
int main()
{
    int num=0;
    printf("Enter the value of the number:\n");
    scanf("%d",&num);
    armstrong(num);
}