#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void ft_putnbr(int nbr)
{
	int 	a;
	int	b;

	if(nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}

	a = nbr;
	b = 1;
	while((a / 10) > 0)
	{
		a = a / 10;
		b = b * 10;
	}

	a = nbr;
	while(b > 0)
	{
		ft_putchar((a / b) + 48);
		a = a % b;
		b = b / 10;
	}
}

void ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

int main()
{
	int 	a = 5;
	int	b = 2;

	ft_ultimate_div_mod(&a, &b);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	ft_putchar('\n');
	
}
