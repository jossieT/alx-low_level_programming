#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - print any number to 98.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
    int a = n;
    if(a <= 98)
    {
    for(a ; a <= 98; a++)
    {
        printf("%d ,", a);
    }
    }
    else
    {
        for(a ;a >= 98; a--)
    {
        printf("%d ,", a);
    }
    }
    _putchar('\n');
}
