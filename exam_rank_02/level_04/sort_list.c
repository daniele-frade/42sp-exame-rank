/*
Assignment name  : sort_list
Expected files   : sort_list.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following functions:

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function
pointer cmp to select the order to apply, and returns a pointer to the
first element of the sorted list.

Duplications must remain.

Inputs will always be consistent.

You must use the type t_list described in the file list.h
that is provided to you. You must include that file
(#include "list.h"), but you must not turn it in. We will use our own
to compile your assignment.

Functions passed as cmp will always return a value different from
0 if a and b are in the right order, 0 otherwise.

For example, the following function used as cmp will sort the list
in ascending order:

int ascending(int a, int b)
{
	return (a <= b);
}
*/

#include "ft_list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int)) 
{
	t_list *current = lst; // i
	t_list *index = NULL; // j
	int temp;

	if (lst == NULL)
		return NULL;
    while (current != NULL) 
	{
        index = current->next; // j = i + 1
        while (index != NULL) 
		{
            if (cmp(current->data, index->data) == 0) // não ordenados
			{
                temp = current->data; // guarda o 1º index
                current->data = index->data; // 1º recebe o 2º (swap)
                index->data = temp; // 2º recebe o 1º via temp (swap)
            }
            index = index->next; // j++
        }
        current = current->next; // i++
    }
    return (lst);
}
