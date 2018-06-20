#include <stdio.h>
#include "Definitions.h"

#ifdef SYMBOLIC_CONSTANTS

#define LOWER	0		/* lower limit of temperature table */
#define UPPER	300		/* upper limit */
#define STEP	20		/* step size */

/* print Fahreinheit-Celsius table */

int main()
{
	int fahr;

	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}

#endif // SYMBOLIC_CONSTANTS
