// Versão simplificada do putnbr

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_number(int number)
{
	if (number > 9)
	{
		ft_write_number(number / 10);
		ft_write_number(number % 10);
	}
	else
		ft_putchar(number + '0');
}

// int main()
// {
// 	ft_write_number(90);
// 	return (0);
// }