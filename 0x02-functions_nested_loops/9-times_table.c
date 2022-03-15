
#include "holberton.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: nothing.
 */

void times_table(void)
{
int n, i;
n = 9;
for (i = 0, i <= 10; ++i)
{
_putchar(n, i, n *i);

}
return (0);
}
