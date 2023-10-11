#include "ft_stock_str.h";
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
}

void	ft_putnbr(int nb)
{
	long	n;
	long	nb2;

	nb2 = nb;
	if (nb2 < 0)
	{
		nb2 *= -1;
		write(1, "-", 1);
	}
	if (nb2 < 10)
	{
		nb2 += 48;
		ft_putchar(nb2);
	}
	else
	{
		n = nb2 % 10 + 48;
		ft_putnbr(nb2 / 10);
		ft_putchar(n);
	}
}

void ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = -1;
	while (par[++i].str != 0)
	{
		ft_printstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_printstr(par[i].copy);
		ft_putchar('\n');
	}
}
