#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplication
 *@argc: argc
 *@argv: argv
 *Return: 1 (arg == 3) 0 (else)
 */
int main(int argc, char *argv[])
{
int w;

if (argc < 3)
{
printf("Error\n");
return (1);
}
w = (argv[1]) * (argv[2]);
printf("%d\n", w);
return (0);
}
