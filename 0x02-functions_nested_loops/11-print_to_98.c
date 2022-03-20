#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print any number to 98.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{

        if (n <= 98)
        {
                for (int a = n ;a <= 98 ;a++)
                {
                        printf("%d ,", a);
                }
        }
        else
        {
                for (int a = n ;a >= 98 ;a--)
                {
                        printf("%d ,", a);
                }
        }
        _putchar('\n');
}

