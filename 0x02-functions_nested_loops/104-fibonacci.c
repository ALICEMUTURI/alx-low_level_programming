#include <stdio.h>
/**
* main - print the first 98 Fibonacci numbers
*
* Return: Always 0.
*/
int main(void)
{
unsigned long int a1 = 1, a2 = 2, b1, b2, c1, c2;
int i;
printf("%lu, %lu", a1, a2);
for (i = 0; i < 96; i++)
{
if (a1 + b1 > 0)
printf(", %lu", a1 + b1);
else
printf(", %lu", a1);
printf("%lu", a2 + b2);
c1 = a1 + b1;
c2 = a2 + b2;
if (c2 > 9999999999)
{
c2 %= 10000000000;
c1++;
}
b1 = a1;
b2 = a2;
a1 = c1;
a2 = c2;
}
printf("\n");
return (0);
}
