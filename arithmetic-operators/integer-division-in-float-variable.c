#include <stdio.h>

int main(void)
{
	float a = 10 / 3;
	printf("a = %f\n", a);
	return (0);
}

/* Question
 * What will be the output of the above code?
 * 1. a = 3.333333
 * 2. a = 3.000000
 * 3. a = 3.4
 * 4. a = 3
 * 
 * Answer
 * 2. a = 3.000000
 * 
 * Explanation
 * In the above code, the value of a is calculated as 10 / 3.
 * Since both 10 and 3 are integers, the result of the division will also be an integer.
 * The result of the division 10 / 3 is 3, and this integer value is then implicitly converted to a float value and stored in the variable a.
 * Therefore, the output of the code will be a = 3.000000.
 * 
 * How about the following code?
 * float a = 10.0 / 3;
 * printf("a = %f\n", a);
 *
 * The output of the above code will be a = 3.333333.
 * */
