#include "main.h"
#include <stdio.h>

/**
 * main - Fizz-Buzz test
 * Description: print numbers 1 -100 replacing multiples of 3 with Fizz,
 * multiples of 5 with Buzz, and multiples of both with FizzBuzz
 * Return: zero
 */

int main(void)

{

int r;
for (r = 1; r < 100; r++)
{

if (r % 3 == 0 && r % 5 == 0)
printf("FizzBuzz ");
else if (r % 3 == 0)
printf("Fizz ");
else if (r % 5 == 0)
printf("Buzz ");
else
printf("%d ", r);
}
printf("Buzz\n");
return (0);

}
