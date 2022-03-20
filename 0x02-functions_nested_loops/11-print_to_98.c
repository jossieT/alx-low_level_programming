#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print any number to 98.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
   
	if(n <= 98)
    	{
	       	for(n ; n <= 98; n++)
    	{
        printf("%d ,", n);
    	}
    	}
    	else
    	{
        	for(n ;n >= 98; n--)
    	{
        printf("%d ,", n);
    	}
    	}
    	_putchar('\n');
}
