/*
Assignment name  : ft_list_remove_if
Expected files   : ft_list_remove_if.c
Allowed functions: free
--------------------------------------------------------------------------------

Write a function called ft_list_remove_if that removes from the
passed list any element the data of which is "equal" to the reference data.

It will be declared as follows :

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

cmp takes two void* and returns 0 when both parameters are equal.

You have to use the ft_list.h file, which will contain:

$>cat ft_list.h
typedef struct      s_list
{
	struct s_list   *next;
	void            *data;
}                   t_list;
$>
*/
#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list  *aux;
	t_list  *temp;

	// Primeiro nó
	aux = *begin_list;
	while(aux != NULL)
	{
		if(cmp(aux->data, data_ref) == 0)
		{
			if (aux == *begin_list)
			{
				*begin_list = (*begin_list)->next;
				free(aux);
				aux = *begin_list;
			}
		}
		else
			break;
	}
	// Do segundo nó em diante
	while (aux->next != NULL)
	{
		if(cmp(aux->next->data, data_ref) == 0)
		{
			temp = aux->next;
			aux->next = temp->next;
			free(temp);
		}
		else
			aux = aux->next;
	}
	// Último nó
	temp = *begin_list;
	while (temp->next != aux) // Fazer temp ficar um nó atrás do aux(aux é o último nó, nessa linha do código)
		temp = temp->next;
	if(cmp(aux->data, data_ref) == 0) // Verifico se tenho que remover aux
	{
		temp->next = NULL; // Atualizo o nó que apontava pra aux (agora ele aponta pra NULL)
		free(aux);
	}
}
void	print_list(t_list **begin_list)
{
	t_list *cur = *begin_list;
	while (cur != 0)
	{
		printf("%s\n", (char *)cur->data);
		cur = cur->next;
	}
}

int		main(void)
{
	char straa[] = "String aa";
	t_list *aa = malloc(sizeof(t_list));
	aa->next = 0;
	aa->data = straa;

	char strbb[] = "String bb";
	t_list *bb = malloc(sizeof(t_list));
	bb->next = 0;
	bb->data = strbb;

	char strcc[] = "String cc";
	t_list *cc = malloc(sizeof(t_list));
	cc->next = 0;
	cc->data = strcc;

	char strdd[] = "String dd";
	t_list *dd = malloc(sizeof(t_list));
	dd->next = 0;
	dd->data = strdd;

	aa->next = bb;
	bb->next = cc;
	cc->next = dd;

	t_list **begin_list = &aa;

	print_list(begin_list);
	printf("----------\n");
	ft_list_remove_if(begin_list, strdd, strcmp);
	print_list(begin_list);
}

