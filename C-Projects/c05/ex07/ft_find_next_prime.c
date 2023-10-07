/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgenoves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:50:14 by mgenoves          #+#    #+#             */
/*   Updated: 2023/10/03 14:32:59 by mgenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;

	count = 1;
	while (count * count <= nb && count <= 46340)
	{
		if (count * count == nb)
			return (count);
		count += 1;
	}
	return (count - 1);
}

int	ft_is_prime(int nb)
{
	int	count;
	int	sqrt;

	count = 2;
	sqrt = ft_sqrt(nb);
	if (nb < 2)
		return (0);
	while (sqrt >= count)
	{
		if (nb % count == 0)
			return (0);
		count += 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
