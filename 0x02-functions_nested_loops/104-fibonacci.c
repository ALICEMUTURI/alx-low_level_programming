#include <stdio.h>
int main(void)
{
unsigned long a = 1,b = 2,next;
int i;
printf ("1, 2");
for (i=3;i<=98;i++)
{
next = a+b;
printf (", %lu",next);
a = b;
b = next;
}
printf ("\n");
return(0);
}
