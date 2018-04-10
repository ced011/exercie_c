# include <unistd.h>

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

int ft_strlen(char *str)
{
	int 	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}

	ft_putnbr(i);
	return(i);
}

int main()
{
	char	chaine[] = "Hello World";
	
	ft_strlen(&chaine[0]);
	ft_putchar('\n');
}
