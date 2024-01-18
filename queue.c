#include "monty.h"
/**
 * addqueue - adds a node in a queue
 * @head: head node
 * @n: data
 * Return: Nothing
 */
void addqueue(stack_t **head, int n)
{
	stack_t *newnode, *aux;

	aux = *head;
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		printf("Error\n");
	}
	newnode->n = n;
	newnode->next = NULL;
	if (aux)
	{
		while (aux->next)
		{
			aux = aux->next;
		}
	}
	if (!aux)
	{
		*head = newnode;
		newnode->prev = NULL;
	}
	else
	{
		aux->next = newnode;
		newnode->prev = aux;
	}
}
