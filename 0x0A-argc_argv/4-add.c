#include <stdio.h>
#include "stdlib.h"
/**
 *main - Addiction
 *@argc: argv
 *@argv: argc
 *Return: 0 (first condition), 1 (error)
 */
int main(int argc, char *argv[])
{
int w = 0;
int j = 0;
int add = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (w = 1; w < argc; w++)
{
for (j = 0; argv[w][c] != '\0'; j++)
}
if (!(argv[w][j] >= '0' && argv[w][j] <= '9'))
{
printf("Error\n");
return (1);
}
}
