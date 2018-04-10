#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	char a, b, c, d;
	
	a = '0';
	b = '0';
	c = '0';
	d = '1';

	while(!((a == '9') && (b == '9')))
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		if(!((a == '9') && (b == '9')))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		d++;
		if(d > '9')
		{
			d = '0';
			c++;
		}
		if(c > '9')
		{
			c = '0';
			b++;
		}
		if(b > '9')
		{
			b = '0';
			a++;
		}
			
	}
}
int main()
{
	ft_print_comb2();
	return(0);
}
		
