// Write a program to print cubes of the first N natural numbers

#include <stdio.h>

int main()
{
    int n;
    printf("enter the number :\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("the  cube of %d is %d\n",i, i * i * i);
    }

    return 0;
}