#include <stdio.h>
/**
* main - Prints the first 98 Fibonacci numbers
* Return: Always 0.
*/
int main(void)
{
unsigned long int a1 = 0, a2 = 1, b1 = 0, b2 = 2;
unsigned long int over, d1, d2;
int i;
printf("%lu, %lu, ", a2, b2);
for (i = 2; i < 98; i++)
{
d1 = a1 + b1;
d2 = a2 + b2;
over = d2 / 10000000000;
a1 = a2;
a2 = b2;
b1 = d1 + over;
b2 = d2 - over * 10000000000;
if (b1)
printf("%lu%lu", b1, b2);
else
printf("%lu", b2);
if (i != 97)
printf(", ");
}
printf("\n");
return (0);
}
