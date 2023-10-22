#include <stdio.h>

/* Write a program which prints the words in its input, one per line.*/

int main()
{
  char c;
  char last_char = -1;

  while ((c = getchar()) != EOF) {
    if((c==' ' ||  c=='\t' ||  c=='\n')) {
      if(c != last_char) {
        putchar('\n');
      }
    }
    else {
      putchar(c);
    }

    last_char=c;
  }

  return 0;
}

