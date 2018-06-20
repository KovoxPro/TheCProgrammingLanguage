#include <stdio.h>
#include "Definitions.h"

#ifdef CHARACTER_INPUT_AND_OUTPUT

/* copy input to output; 1st version */
void file_copying_version_one()
{
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}

/* copy input to output; 2nd version */
void file_copying_version_two()
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);
}

/* count characters in input; 1st version */
void character_counting_version_one()
{
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}

/* count characters in input; 2nd version */
void character_counting_version_two()
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}

/* count lines in input */
void line_counting()
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);
}

#define IN	1 /* inside a word */
#define OUT	0 /* outside a word */

/* count lines, words, and characters in input */
void word_counting()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		nc++;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}

int main()
{
	//file_copying_version_one();
	//file_copying_version_two();
	//character_counting_version_one();
	//character_counting_version_two();
	//line_counting();
	word_counting();
}

#endif // CHARACTER_INPUT_AND_OUTPUT
