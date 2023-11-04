
//Write a program in C to check whether the numbers are friendly numbers or not.
#include <stdio.h>
int friendly(int num)
{
    int sum = 0;
    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main ()
{
    int num1=0,num2=0;
    printf("Enter the two numbers:\n");
    scanf("%d %d",&num1,&num2);
    int sum1 = friendly(num1);
    int sum2 = friendly(num2);

    if(sum1/num1 == sum2/num2)
        printf("(%d, %d) are friendly pairs", num1, num2);
    else
        printf("(%d, %d) are not friendly pairs", num1, num2);


}