#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hx;
	int dc;

	for (dc = 48 ; dc < ':' ; dc++){
		putchar(dc);
	}
	for (hx = 97 ; hx < 103 ; hx++){
                putchar(hx);
        }
	putchar ('\n');
	return (0);
}
