#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void ft_putnbr(int nb)
{
 	int a, b;
	
	if(nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	
	a = nb;
	b = 1;
	while((a / 10 ) > 0 )
	{
		b = b*10;
		a = a/10;
	}
	
	a = nb;
	while (b > 0)
	{
		ft_putchar(a/b+'0');
		a = a%b;
		b = b/10;
	}
	
}

int main()
{
	ft_putnbr(-10000004);
	ft_putchar('\n');
	return(0);
}
