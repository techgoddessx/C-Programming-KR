#include <stdio.h>

/* print a heading above the Fahrenheit-Celsius table */ 

int main() 
{
	int fahr,celsius;
	int upper,lower,step;

	upper = 300;
	lower = 0;
	step = 20;

	printf("---------------------------\n");
	printf("Fahrenheit\tCelsius\n");
	printf("---------------------------\n");

	fahr = lower;
	while ( fahr <= upper ) 
	{
		celsius = 5 * (fahr -32) / 9 ; 
		printf("%5d %16d\n",fahr,celsius);
		fahr = fahr + step; 
	}
}
