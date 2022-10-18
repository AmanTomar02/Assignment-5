// Write a program to print the first N even natural numbers in reverse order
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number :\n");
    scanf("%d", &n);
    n=n*2;
    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", i);
        i--;
    }

    return 0;
}