#include <stdio.h>

int main()
{
    double a, c;
    int b;

    printf("\nEnter a number: ");
    scanf("%lf", &a);

    b = (int)a;
    c = a - b;

    if (c == 0)
    {
        printf("\nIt's an integer.\n\n");
    }
    else
    {
        printf("\nIt's not an integer.\n\n");
    }

    return 0;
}
