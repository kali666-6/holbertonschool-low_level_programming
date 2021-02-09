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
int w;
i = 0;
while (i < 11)
{
w = 'a';
while (w <= 'z')
{
_putchar(w++);
}
_putchar('\n');
i++;
}
}
