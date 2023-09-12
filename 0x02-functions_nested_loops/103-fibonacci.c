#include <stdio.h>
/**
* main - Computes and prints the sum of even Fibonacci numbers
* which do not exceed 4,000,000.
* Return: Always 0.
*/
int main(void)
{
unsigned long a = 1, b = 2, next = 0;
unsigned long sum = 2;
while (1)
{
next = a + b;
if (next > 4000000)
break;
if (next % 2 == 0)
sum += next;
a = b;
b = next;
}
printf("%lu\n", sum);
return (0);
}
