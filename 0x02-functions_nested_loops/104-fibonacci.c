#include <stdio.h>
/**
* main - Prints the first 98 Fibonacci numbers
* Return: Always 0.
*/
int main(void)
{
unsigned long int a=1,b=2,a_next,b_next,overflow;
int i;
printf("%lu, %lu",a,b);
for(i=2;i<98;i++)
{
overflow=(a+b)/10000000000;
a_next=(a+b)-(overflow*10000000000);
b_next=b+overflow;
printf(", %lu%lu",b_next,a_next);
a=a_next;
b=b_next;
}
printf("\n");
return(0);
}
