#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void ft_print_alphabet(void)
{
	char lettre = 'a';
	while(lettre <= 'z')
	{
		ft_putchar(lettre);
		lettre++;
	}
}

int main()
{
	ft_print_alphabet();
	ft_putchar('\n');
	return(0);
}
