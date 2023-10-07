/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgenoves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:13:27 by mgenoves          #+#    #+#             */
/*   Updated: 2023/10/02 14:00:05 by mgenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	len_tofind;

	i = 0;
	len_tofind = ft_strlen(to_find);
	while (*str != '\0')
	{
		while (*str == *to_find && i < len_tofind)
		{
			str++;
			to_find++;
			i++;
		}
		if (*to_find != '\0')
		{
			str = str - i + 1;
			to_find -= i;
			i = 0;
		}
		else
			return (str - i);
	}
	return (str);
}
