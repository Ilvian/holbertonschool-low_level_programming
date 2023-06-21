#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int i, j;
int sum;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
sum = i * j;
if (sum >= 10)
_putchar('0' + sum / 10);
_putchar('0' + sum % 10);
if (j < 9)
{
_putchar(',');
}
if (i * (j + 1) < 10 && j != 9)
{
_putchar(' ');
_putchar(' ');
}
else if (j != 9)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
