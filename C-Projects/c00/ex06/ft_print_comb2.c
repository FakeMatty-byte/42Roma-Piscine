/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgenoves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:29:21 by mgenoves          #+#    #+#             */
/*   Updated: 2023/09/23 14:37:44 by mgenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_comb(int a, int b)
{
	print_char(a / 10 + 48);
	print_char(a % 10 + 48);
	print_char(' ');
	print_char(b / 10 + 48);
	print_char(b % 10 + 48);
	if (!(a == 98 && b == 99))
	{
		print_char(',');
		print_char(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_comb(a, b);
			b++;
		}
		a++;
	}
}
