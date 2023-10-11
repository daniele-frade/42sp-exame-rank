/*
Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);
*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>

// int	main()
// {
// 	int a = 0;
// 	int b = 1;
// 	printf("The value of 'a' before: %d\n", a);
// 	printf("The value of 'b' before: %d\n", b);
// 	ft_swap(&a, &b);
// 	printf("The new value of 'a': %d\n", a);
// 	printf("The new value of 'b': %d\n", b);
// }