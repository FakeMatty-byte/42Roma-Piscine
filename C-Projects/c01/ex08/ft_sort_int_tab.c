/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgenoves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:36:34 by mgenoves          #+#    #+#             */
/*   Updated: 2023/09/26 12:41:54 by mgenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check(int *tab, int j)
{
	int	temp;

	if (tab[j] >= tab[j + 1])
	{
		temp = tab[j];
		tab[j] = tab[j + 1];
		tab[j + 1] = temp;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			check(tab, j);
			j++;
		}
		i++;
	}
}
