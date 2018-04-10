#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void ft_putnbr(int nbr)
{
	int	a;
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
		b = b * 10;
		a = a / 10;
	}

	a = nbr;
	while(b > 0)
	{
		ft_putchar((a / b) + 48);
		a = a % b;
		b = b / 10;
	}

}

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int c;
	int d;

	ft_div_mod(5, 2, &c, &d);
	ft_putnbr(c);
	ft_putchar('\n');
	ft_putnbr(d);
	ft_putchar('\n');
}
