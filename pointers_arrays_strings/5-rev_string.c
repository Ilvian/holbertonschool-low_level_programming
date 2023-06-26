#include "main.h"
/**
 *rev_string - reverses the string
 *@s: string
 */
void rev_string(char *s)
{
	int l = 0;
	int r;
	char rev = s[0];

	while (s[l] != '\0')
		l++;
	for (r = l; r >= 0; r++)
	{
		l--;
		rev = s[r];
		s[r] = s[l];
		s[l] = rev;
	}
}


