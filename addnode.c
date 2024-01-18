#include "monty.h"
/**
 * addnode - add node to head stack
 * @head: head of stack
 * @n: new value
 * Return: Nothhing
 */
void addnode(stack_t **head, int n)
{
	stack_t *newnode, *aux;

	aux = *head;
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (aux)
	{
		aux->prev = newnode;
	}
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
}
