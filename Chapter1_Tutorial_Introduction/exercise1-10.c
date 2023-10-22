#include <stdio.h>

/* Write a program to copy its input to its output,
 * replacing each tab by the three-character sequence \t
 * each backspace by \b 
 * each backlash by \\ */ 

int main()
{
	char c;

	while ((c=getchar()) != EOF)
	{
		if (c == '\t')
		{
			putchar('\\');
			putchar('t');
		}
		else if (c == '\b')
		{
			putchar('\\');
			putchar('b');
		}
		else if (c == '\\')
		{
			putchar('\\');
			putchar('\\');
		}
		else
		{
			putchar(c);
		}
	}
}

