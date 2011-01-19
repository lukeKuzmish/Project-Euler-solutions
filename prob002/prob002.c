/* solution to Euler Project's problem 2 */
#include <stdio.h>


/* handy little macro, checks parity and returns true
   if the number passed is_even. */
#define is_even(x)  (x%2==0)

/* uncomment the definition to view the under the hood addition */
/* #define DEBUG 1 */

long UPPER_LIMIT = 4000000;


void fib(long *f1, long *f2, long *result){
	*result = *f1 + *f2;
}

int main () {
	long	sum		= 0;
	long	f1		= 0;
	long	f2		= 1;
	long	result	= 0;
	/* GOTCHA: if you just check result where f1=1 and f2=2,
	   you'll never yield the case where result = 2. */

	fib(&f1,&f2,&result);

	while (result <= UPPER_LIMIT){
		/* add to sum if the digit is even */
		if (is_even(result)) {
			sum += result;
			#ifdef DEBUG
				printf("adding %i to sum (%i)\n", result,sum);
			#endif
		}

		/* prepare next iteration */
		f1 = f2;
		f2 = result;
		fib(&f1,&f2,&result);

	} /* while */

	/* display results */
	printf("%i is sum", sum);

	return 0;
}

/* result: 4613732 is sum */
