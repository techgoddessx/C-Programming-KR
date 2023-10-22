#include <stdio.h>

/* count lines in input. 
 *  Input lines are assumed to be terminated by the newline character \n that has been religiously appended to every line written out.*/ 

int main()
{
	int c, nl;

	nl = 0;
	while((c = getchar()) != EOF )
		if (c == '\n')
			++nl;
	printf("%d\n",nl);
}
