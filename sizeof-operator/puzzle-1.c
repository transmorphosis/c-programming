#include<stdio.h>

int main()
{
    int i = 10;

    int size = sizeof(i++);
    printf("i = %d\n", i);

	i++;
	printf("i = %d\n", i);

    return (0);
}

/* Question
 * What is the output of the above code?
 * 1. i = 10, i = 11
 * 2. i = 11, i = 11
 * 3. i = 10, i = 12
 * 4. i = 12, i = 12
 *
 * Answer
 * 1. i = 10, i = 11
 *
 * Explanation
 * The sizeof operator does not evaluate the expression passed to it.
 * It just returns the size of the data type of the expression.
 * So, the expression i++ is not evaluated and the value of i remains 10.
 * */
