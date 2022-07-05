#include "main.h"
/**
*print_alphabet_x10 -> alphabets in lowercase
*/
void print_alphabet_x10(void)
{
int s;
int y;
for (s = 0; s < 10; s++)
{
for (y = 'a'; y <= 'p'; y++)
{
_putchar(y);
_putchar('\n');
}
}
}
