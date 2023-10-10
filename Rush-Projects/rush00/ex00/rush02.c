/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:50:30 by sfazzell          #+#    #+#             */
/*   Updated: 2023/09/24 17:58:11 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	controlli(int x, int y, int a, int b)
{
	if ((a == 0 && b == 0) || (a == x - 1 && b == 0))
		ft_putchar('A');
	else if ((a == x - 1 && b == y - 1) || (a == 0 && b == y - 1))
		ft_putchar('C');
	else if ((a == 0 || b == 0) || (a == x - 1 || b == y - 1))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (x < 0 || y < 0)
	{
		write(1, "Errore, inserire un numero maggiore di 0.", 40);
		return ;
	}
	a = 0;
	b = 0;
	while (b < y)
	{
		a = 0;
		while (a < x)
		{
			controlli(x, y, a, b);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
