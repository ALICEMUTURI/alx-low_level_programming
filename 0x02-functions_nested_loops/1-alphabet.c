#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet
 *
 * Description: This function prints the alphabet in lowercase followed by a newline.
 * Return: void
 */
void print_alphabet(void)
{
//... your code here
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
