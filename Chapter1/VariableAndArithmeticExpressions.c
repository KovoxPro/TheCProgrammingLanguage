#include <stdio.h>
#include "Definitions.h"

#ifdef VARIABLE_AND_ARITHMETIC_EXPRESSIONS

/* print Fahreinheit-Celsius table for fahr = 0, 20, ..., 300 */

void version_one()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}

/* print Fahreinheit-Celsius table for fahr = 0, 20, ..., 300; floating-point version */

void version_two()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

int main()
{
	//version_one();
	version_two();
}

#endif // VARIABLE_AND_ARITHMETIC_EXPRESSIONS
