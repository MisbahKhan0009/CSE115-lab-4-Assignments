#include <stdio.h>

int main()
{
    char a;

    printf("\nEnter a digit: ");
    scanf("%c", &a);

    if ((a <= 9 && a >= 1) || (a <= 'f' && a >= 'a') || (a <= 'F' && a >= 'A'))
    {
        printf("\nIt's a hexadecimal digit.\n\n");
    }

    else
    {
        printf("\nIt's a not hexadecimal digit.\n\n");
    }

    return 0;
}
