#include "holberton.h"
/**
 * print_alphabet - entry point
 *
 * Return: 0 in success
 */
void print_alphabet(void)
{
int a;
a = 'a';
while (a <= 'z')
{
_putchar(a++);
}
_putchar ('\n');
return;

}
