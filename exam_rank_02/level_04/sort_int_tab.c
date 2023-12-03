/*
Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.
*/

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
	unsigned int j;
	int temp;
	
	i = 0;
    while (i < size) 
	{
        j = i + 1;
        while (j < size) 
		{
            if (tab[i] > tab[j]) 
			{
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}
#include <stdio.h>

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    unsigned int size = sizeof(arr) / sizeof(arr[0]);
    printf("Array original: ");
    for (unsigned int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
   	sort_int_tab(arr, size);
    printf("\nArray ordenado: ");
    for (unsigned int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
	printf("\n");
    return (0);
}