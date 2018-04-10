#include <unistd.h>

int ft_putchar(char c)
{
	write(1,&c,1);
	return(0);
}

void ft_print_nbr(int nbr)
{
	int a, b;

	if(nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}

	a = nbr;
	b = 1;
	while((a/10) > 0)
	{
		b = b*10;
		a = a/10;
	}

	a = nbr;
	while(b > 0)
	{
		ft_putchar(a/b + '0');
		a = a%b;
		b = b / 10;
	}
	
}

void ft_ft(int *nbr)
{

	*nbr = 42;
	ft_print_nbr(*nbr);
}

int main()
{ 	
	int a;
	 ft_ft(&a);
	 ft_putchar('\n');
	 return(0);
	 
}
