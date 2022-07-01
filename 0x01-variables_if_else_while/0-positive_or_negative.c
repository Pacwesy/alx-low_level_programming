#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *Description:Display if zero or negative or positive number
 *Return: 0, if success
 *main - check if number
 *
 *@void: null value
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0);
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);

}
