#include "main.h"
/**
 *jack_bauer - function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 *Return: None
 */
void jack_bauer(void)
{
int m = 0;
int n = 0;
while (n <= 23)
{
m = 0;
while (m <= 59)
{
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar(' : ');
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
_putchar('\n');
n += 1;
}
m += 1;
}
}
