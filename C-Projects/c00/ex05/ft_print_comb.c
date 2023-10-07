/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgenoves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:24:31 by mgenoves          #+#    #+#             */
/*   Updated: 2023/09/23 17:10:03 by mgenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	stampa(int c, int d, int u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c != 55)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = 48;
	d = 49;
	u = 50;
	while (c < d && d < u && c <= 55 && d <= 56 && u <= 57)
	{
		stampa(c, d, u);
		u++;
		if (u > 57)
		{
			d = d + 1;
			u = d + 1;
		}
		if (d > 56)
		{
			c = c + 1;
			d = c + 1;
			u = d + 1;
		}
	}
}
