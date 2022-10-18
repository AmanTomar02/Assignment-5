// Write a program to print the first N odd natural numbers


#include <stdio.h>

int main()
{
    int n;
    printf("enter the number :\n");
    scanf("%d", &n);
    n=n*2;
    for (int i = 1; i < n; i++)
    {
        printf("%d\n", i++);
        
    }

    return 0;
}