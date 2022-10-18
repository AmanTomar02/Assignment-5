//  Write a program to print a table of N.
#include <stdio.h>

int main()
{
    int x, i, T;
    printf("enter the number for table ...\n");
    scanf("%d", &x);
    printf("the table of %d is : \n", x);
    for (i = 1; i <= 10; i++)
    {
        T = x * i;
        printf("%d x %d = %d\n", x, i, T);
    }

    return 0;
}
