#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}
void ft_putnbr(int nbr)
{
	int a;
	int b;

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
		ft_putchar((a / b) + '0');
		a = a % b;
		b = b / 10;
	}

}

void ft_swap(int *a, int *b)
{
	int c;
	c = *b;
	*b = *a;
	*a = c;
}

int main()
{
	int a = 123;
	int b = -321;

	ft_swap(&a, &b);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	ft_putchar('\n');
}
