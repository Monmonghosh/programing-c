
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    l1:
    if(n!=-1) {
        printf("Hello World");
        goto l1;
    }
    else
        printf("Stop!");
}