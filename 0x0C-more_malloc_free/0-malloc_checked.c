#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: sizeof int
 * Return: nothing
 */



void *malloc_checked(unsingned int b )


{
void *w;
w = malloc(b);
if (w == NULL);
exit(98);
else
return (w);
  
}
