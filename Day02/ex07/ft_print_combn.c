#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1 );
	return(0);
}

void ft_print_combn(int n)
{
	int a, b, c, d, e, f, g, h, i;
	
	a = 0;

	if(n == 1)
	{
		while(a <= 9)
		{
			ft_putchar(a + '0');
			if(a != 9)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			a++;
		}
	}

	else if(n == 2)
	{
		while(a <= 8)
		{
			b= a + 1;
			while(b <= 9)
			{
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				if(a != 8)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				b++;
			}
			a++;
			
		}
	}
	else if(n == 3)
	{
		while(a <= 7)
		{
			b = a + 1;
			while(b <= 8)
			{
				c = b + 1;
				while(c <= 9)
				{
					ft_putchar(a + '0');
					ft_putchar(b + '0');
					ft_putchar(c + '0');
					if (a != 7)
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
					c++;
				}
				b++;	
			}
			a++;
		}
	}
	else if(n == 4)
	{
		while(a <= 6)
		{
			b = a + 1;
			while(b <= 7)
			{
				c = b + 1;
				while(c <= 8)
				{
					d = c + 1;
					while(d <= 9)
					{
						ft_putchar(a + '0');
						ft_putchar(b + '0');
						ft_putchar(c + '0');
						ft_putchar(d + '0');
						if (a != 6)
						{
							ft_putchar(',');
							ft_putchar(' ');
						}
						d++;
					}
					c++;
				}
				b++;
			}
			a++;
		}
	}
	else if (n == 5)
	{
		while(a <= 5)
		{
			b = a + 1;
			while(b <= 6)
			{
				c = b + 1;
				while(c <= 7)
				{
					d = c + 1;
					while(d <= 8)
					{
						e = d + 1;
						while(e <= 9)
						{
							ft_putchar(a + '0');
							ft_putchar(b + '0');
							ft_putchar(c + '0');
							ft_putchar(d + '0');
							ft_putchar(e + '0');
							if(a != 5)
							{
							ft_putchar(',');
							ft_putchar(' ');
							}
							e++;
						}
						d++;
					}
					c++;
				}
				b++;
			}
			a++;
		}
	}
	else if (n == 6)
	{
		while(a <= 4)
		{
			b = a + 1;
			while(b <= 5)
			{
				c = b + 1;
				while(c <= 6)
				{
					d = c + 1;
					while(d <= 7)
					{
						e = d + 1;
						while(e <= 8)
						{
							f = e + 1;
							while(f <= 9)
							{
								ft_putchar(a + '0');
								ft_putchar(b + '0');
								ft_putchar(c + '0');
								ft_putchar(d + '0');
								ft_putchar(e + '0');
								ft_putchar(f + '0');
								if(a != 4)
								{
									ft_putchar(',');
									ft_putchar(' ');
								}
								f++;
							}
							e++;
						}
						d++;
					}
					c++;
				}
				b++;
			}
			a++;
		}
	}
	else if(n == 7)
	{
		while(a <= 3)
		{
			b = a + 1;
			while(b <= 4)
			{
				c = b + 1;
				while(c <= 5)
				{
					d = c + 1;
					while(d <= 6)
					{
						e = d + 1;
						while(e <= 7)
						{
							f = e + 1;
							while(f <= 8)
							{
								g = f + 1;
								while(g <= 9)
								{
									ft_putchar(a + '0');
									ft_putchar(b + '0');
									ft_putchar(c + '0');
									ft_putchar(d + '0');
									ft_putchar(e + '0');
									ft_putchar(f + '0');
									ft_putchar(g + '0');
									if(a != 3)
									{
										ft_putchar(',');
										ft_putchar(' ');
									}
									g++;
								}
								f++;
							}
							e++;
						}
						d++;
					}
					c++;
				}
				b++;
			}
			a++;
		}
	}
	else if(n == 8)
	{
		while(a <= 2)
		{
			b = a + 1;
			while(b <= 3)
			{
				c = b + 1;
				while(c <= 4)
				{
					d = c + 1;
					while(d <= 5)
					{
						e = d + 1;
						while(e <= 6)
						{
							f = e + 1;
							while(f <= 7)
							{
								g = f + 1;
								while(g <= 8)
								{
									h = g + 1;
									while(h <= 9)
									{
										ft_putchar(a + '0');
										ft_putchar(b + '0');
										ft_putchar(c + '0');
										ft_putchar(d + '0');
										ft_putchar(e + '0');
										ft_putchar(f + '0');
										ft_putchar(g + '0');
										ft_putchar(h + '0');
										if(a != 2)
										{
											ft_putchar(',');
											ft_putchar(' ');
										}
										h++;
									}
									g++;
								}
								f++;
							}
							e++;
						}
						d++;
					}
					c++;
				}
				b++;
			}
			a++;
		}
	}
	else if(n == 9)
	{
		while(a <= 1)
		{
			b = a + 1;
			while(b <= 2)
			{
				c = b + 1;
				while(c <= 3)
				{
					d = c + 1;
					while(d <= 4)
					{
						e = d + 1;
						while(e <= 5)
						{
							f = e + 1;
							while(f <= 6)
							{
								g = f + 1;
								while(g <= 7)
								{
									h = g + 1;
									while(h <= 8)
									{
										i = h + 1;
										while(i <= 9)
										{
											ft_putchar(a + '0');
											ft_putchar(b + '0');
											ft_putchar(c + '0');
											ft_putchar(d + '0');
											ft_putchar(e + '0');
											ft_putchar(f + '0');
											ft_putchar(g + '0');
											ft_putchar(h + '0');
											ft_putchar(i + '0');
											if(a != 1)
											{
												ft_putchar(',');
												ft_putchar(' ');
											}
											i++;
										}
										h++;
									}
									g++;
								}
								f++;
							}
							e++;
						}
						d++;
					}
					c++;
				}
				b++;
			}
			a++;
		}
	}
}

int main()
{
	ft_print_combn(1);
	ft_putchar('\n');
}
