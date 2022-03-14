#include <stdlib.h>
#include <time.h>
/**
   * main - checks if positive, zero or negative
   *
   *Return: zero
*/


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
	       printf(n, "%d is positive number\n")
        }
	else if(n == 0)
	{
               printf(n, "%d is zero\n")
        }	       
	else( n < 0)
	{
               printf(n, "%d is Negative number\n")
        }
                           	
	return (0);
}
