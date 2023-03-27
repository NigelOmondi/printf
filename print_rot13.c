#include "main.h"
#include <stdio.h>

/* main - entry point 
 * @*str: size of the string
 */
void print_rot13string(const char *str)
{
	const char *s = str;
	while (*s != '\0')
	{
		if (isalpha(*s))
		{
			char base = isupper(*s) ? 'A' : 'a';
			putchar(((*s - base) + 13) % 26 + base);
		}
		else
		{
			putchar(*s);
		}
		s++;
	}
}
