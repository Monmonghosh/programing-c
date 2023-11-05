//Write a program in C to calculate the logarithmic value of a numerical constant by taking the value of the base and x as an input from the user.
#include<stdio.h>
#include<math.h>
int logarithm(int x,int base)
{
    return(x>base)?1+logarithm(x/base,base):0;

}

int main()
{
    int x=0,base=0;
    printf("Enter the value of x and the base:\n");
    scanf("%d %d",&x,&base);
    printf("The logarithmic value is:%d\n",logarithm(x,base));
}