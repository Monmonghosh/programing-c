
// Write a program in C to check whether a number is a happy number or not.
#include<stdio.h>
#include<math.h>
int happy(int num)
{
    int i,j,temp,sum=0;
    while(sum!=1 && sum!=4)
    {
        sum=0;
        while(num>0)
        {
            j=num%10;
            sum+=(j*j);
            num=num/10;
        }
        num=sum;
    }

    if(sum==1)
        printf("Happy Number\n");
    else
        printf("UnHappy Number\n");
}
int main()
{
    int num=0;
    printf("Enter the value of num:\n");
    scanf("%d",&num);
    happy(num);
}