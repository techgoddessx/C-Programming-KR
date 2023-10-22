#include <stdio.h>

/*  Write a program to copy its input to its output, 
 *  replacing each string of one or more blanks by a single blank. */

int main() 
{
	int c;
	int lastc = '\0';

	while ((c=getchar()) != EOF)
	{
		if (c != ' ' || lastc != ' ')
		{
			putchar(c);
		}

		lastc = c;
	}
}


