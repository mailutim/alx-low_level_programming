#include "main.h"
/**
 * main - program that prints _putchar.
 *
 * Return: 0
 */
int main(void)
{
int n = 0;
char _putchar[8] = "_putchar";
while (n < 8)
{
_putchar(_putchar[n]);
n++;
}
_putchar("\n");

return (0);
}
