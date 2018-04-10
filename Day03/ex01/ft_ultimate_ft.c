#include <unistd.h>

int 	ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void 	ft_putnbr(int nbr)
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
		a = a / 10;
		b = b * 10;
	}

	a = nbr;
	while(b > 0)
	{
		ft_putchar((a / b) + '0');
		a = a % b;
		b = b / 10;
	}
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;	
}

int 	main()
{
	int	a;
	int	*nbr1;
	int	**nbr2;
	int	***nbr3;
	int	****nbr4;
	int	*****nbr5;
	int	******nbr6;
	int	*******nbr7;
	int	********nbr8;

	nbr1 = &a;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;

	ft_ultimate_ft(&nbr8);
	ft_putnbr(a);
	ft_putchar('\n');
	return(0);
}
