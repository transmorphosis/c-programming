#include<stdio.h>

int main()
{
    printf("%lu\n", sizeof(1.414));
	printf("%lu\n", sizeof(1.414f));
	printf("%lu\n", sizeof(1.414L));

    return 0;
}

// Output: 8 4 16
// Explanation: The size of float is 4 bytes, double is 8 bytes and long double is 16 bytes.

// The default type of a floating point constant is double.
// The suffixes f and F are used to specify a float constant,
// the suffixes l and L are used to specify a long double constant.

// sizeof(1.414) is equivalent to sizeof(double), 
// sizeof(1.414f) is equivalent to sizeof(float) and 
// sizeof(1.414L) is equivalent to sizeof(long double).
