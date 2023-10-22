#include <stdio.h>

/* Write a program to count blanks, tabs, and newlines. */ 

int main ()
{
	int blanks = 0;
	int tabs = 0;
	int newlines = 0;

	char c;

	while ((c=getchar()) != EOF)
	{

		if (c == ' ')
		{
			++blanks;
		}

		else if ( c == '\t')
		{
			++tabs;
		}
		else if ( c == '\n')
		{
			++newlines;
		}
	}

	printf("Number Of Blanks : %d\nNumber Of Tabs : %d\nNumber Of Newlines : %d\n",blanks,tabs,newlines);

	return 0;
}
