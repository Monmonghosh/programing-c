//Write a program in C to check whether character is vowel or not in switch case.
#include<stdio.h>
int main()
{
    char a;
    printf("Enter an alphabet:");
    scanf("%c",&a);
    switch(a)
    {
        case 'a':
            printf("It is a vowel");
            break;
        case 'e':
            printf("It is a vowel");
            break;
        case 'i':
            printf("It is a vowel");
            break;
        case 'o':
            printf("It is a vowel");
            break;
        case 'u':
            printf("It is a vowel");
            break;
        case 'A':
            printf("It is a vowel");
            break;
        case 'E':
            printf("It is a vowel");
            break;
        case 'I':
            printf("It is a vowel");
            break;
        case 'O':
            printf("It is a vowel");
            break;
        case'U':
            printf("It is a vowel");
            break;
            break;
        default:
            printf("It is a Consonant");
    }
}