#include <stdio.h>

/* counts lines, words, and characters in input */

#define YES 1
#define NO 0 

int main()
{
	int c, nl, nw, nc, inword;

	inword = NO;
	nl = nw = nc = 0;

	while ((c = getchar()) != EOF) {
			 ++nc;
			 if (c == '\n')
				 ++nl;
			 if (c== ' ' || c == '\n' || c == '\t')
				 inword = NO;
			 else if (inword == NO) {
				 inword = YES;
				 ++nw;
			 }
	}
	printf("number of newlines :%d\nnumber of words: %d\nnumber of characters: %d\n", nl, nw, nc);
}

