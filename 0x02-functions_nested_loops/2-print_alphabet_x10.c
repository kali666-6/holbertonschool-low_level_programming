#include "holberton.h"
/**
 * print_alphabet_x10 - return the alphabet while a condition is true
 *
 *
 * Return: 1 or 0 success
 */
void print_alphabet_x10(void)
{
int i;
int x;

for (i = 0 ; i < 10 ; i++)
{
for (x = 'a'; x <= 'z'; x++)
{  _putchar(x);
}
_putchar('\n');

}
}
