/*
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/

int	max(int	*tab, unsigned int len)
{
	int	max;
	int	i;

	if (len > 0)
	{
		i = 0;
		max = tab[i];
		while (len > 0)
		{
			if (tab[i] > max)
				max = tab[i];
			len--;
			i++;
		}
		return (max);
	}
	return (0);
}

// Option 2:
// int	max(int *tab, unsigned int len)
// {
// 	int max;

// 	if (len > 0)
// 	{
// 		max = tab[--len]; 
// 		// pré-decremento: aqui o valor de len muda (considerando que seja 4, muda para 3), isso é feito para conseguir acessar o índice
//		// se fosse [len - 1] não mudaria o valor de len, mas ainda assim funcionaria, pq?
// 		while (len-- != 0) 
//		// aqui checa o valor atual e entra no while já decrementado (considerando que agora é 3, entra como 2)
//		// isso é feito para que seja possível acessar o índice 0, ele checa o valor atual, por exemplo 1(true), mas entra com o valor 0
// 		{
// 			if (tab[len] > max)
// 				max = tab[len];
// 		}
// 		return (max);
// 	}
// 	return (0);
// }

// #include <stdio.h>

// int main()
// {
// 	int	tab[4] = {-5, -155, -10, -11};
// 	printf("The max is: %d\n", max(tab, 4));
// 	return (0);
// }
