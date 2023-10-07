/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgenoves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:58:00 by mgenoves          #+#    #+#             */
/*   Updated: 2023/09/28 13:56:48 by mgenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	to_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
}

int	char_is_number(char *str, int i)
{
	if ((str[i - 1] >= '0' && str[i - 1] <= '9'))
		return (0);
	return (1);
}

void	check(char *str, int i)
{
	if (char_is_number(str, i)
		&& (str[i - 1] == ' '
			|| ((str[i - 1] < 'a' || str[i - 1] > 'z')
				&& !(str[i - 1] > 'A' && str[i - 1] < 'Z'))))
	{
		str[i] -= 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	to_lowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 32;
			else
				check(str, i);
		}
		i++;
	}
	return (str);
}
