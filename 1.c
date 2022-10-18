// Write a program to print MySirG N times on the screen

#include <stdio.h>

int main()
{
    int n;
    printf("enter the number :\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("\nthis is my sirg %d ", i);
    }

    return 0;
}