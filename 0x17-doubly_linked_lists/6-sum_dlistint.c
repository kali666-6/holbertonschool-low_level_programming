#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *sum_dlistint - sum
 *@head: head
 *Return: address.
 */
int sum_dlistint(dlistint_t *head)
{
int i = 0;

if (head == NULL)
{
return (0);
}
while (head != NULL)
{
i = i + head->n;
head = head->next;
}
return (i);
}
