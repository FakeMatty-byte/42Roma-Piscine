/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgenoves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:23:00 by mgenoves          #+#    #+#             */
/*   Updated: 2023/09/28 15:36:49 by mgenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	char_is_printable(char c)
{
	return (c > 31 && c < 127);
}

void	print_hex(char c)
{
	char	*hex;
	char	bs;

	bs = '\\';
	hex = "0123456789abcdef";
	ft_putchar(bs);
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!char_is_printable(str[i]))
			print_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
