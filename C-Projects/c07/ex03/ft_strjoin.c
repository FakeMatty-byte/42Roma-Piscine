/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgenoves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:32:44 by mgenoves          #+#    #+#             */
/*   Updated: 2023/10/05 14:12:24 by mgenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_lencompl(int size, char **strs)
{
	int	i;
	int	j;
	int	len;

	i = -1;
	len = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
			len++;
	}
	return (len);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_aux(int size, char **strs, char *sep, char *str)
{
	int		i;
	int		j;
	int		k;
	int		s;

	i = -1;
	s = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
			str[++s] = strs[i][j];
		if (i != size - 1)
		{
			k = -1;
			while (sep[++k] != '\0')
				str[++s] = sep[k];
		}
	}
	str[++s] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len_strs;
	char	*str;

	len_strs = ft_lencompl(size, strs) + ft_len(sep);
	if (len_strs == 0)
	{
		str = NULL;
		return (str);
	}
	str = (char *) malloc (len_strs * sizeof(char));
	if (!str)
		return (0);
	ft_aux(size, strs, sep, str);
	return (str);
}
