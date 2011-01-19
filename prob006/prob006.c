/* project Euler - problem 6: find difference between square of sums
                              and sum of squares */
#include <stdio.h>

#define square(x) x*x
const int UPPER_LIMIT = 100;


unsigned long triangular(int n) {
    /* sum of consecutive integers from 1...n = (n*(n+1))/2 */
    unsigned long toReturn;
    toReturn = (square(n) + n)/2;
    return toReturn;
}


unsigned long consecutive_squares(int n) {
    /* (Sum of consecutive squares = ((n*(n+1)*(2n+1))/6 ) */
    unsigned long toReturn;
    toReturn = n*(n+1)*((2*n)+1);
    toReturn /= 6;
    return toReturn;
}



int main() {

    unsigned long        result = 0;
    unsigned long        termA = 0;
    unsigned long        termB = 0;
    int                  n = UPPER_LIMIT;


    termA = consecutive_squares(n);
    termB = square(triangular(n));
    
    result = termB - termA;
    printf("result is %lu\n", result);
    return 0;
}

