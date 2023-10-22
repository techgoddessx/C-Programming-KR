#include <stdio.h>

/* print Celsius to Fahrenheit Table */

int main()
{
        int fahr,celsius;
        int upper,lower,step;

        upper = 300;
        lower = 0;
        step = 20;

        printf("---------------------------\n");
        printf("Celsius     Fahrenheit\n");
        printf("---------------------------\n");

        celsius = lower;
        while ( celsius <= upper )
        {
                fahr = (celsius * 9 / 5) + 32 ;
                printf("%5d %16d\n",celsius,fahr);
                celsius += step;
        }
}
