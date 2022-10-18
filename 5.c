// Write a program to print the first N odd natural numbers in reverse order.

#include <stdio.h>

int main()
{
    int i, n;
    printf("enter the number :\n");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        if (n % 2 == 0) // for even
        {
            i = i - 1;
            printf("%d\n", i);
        }
        else // odd
        {
            printf("%d\n", i);
            i = i - 1;
        }
    }

    return 0;
}