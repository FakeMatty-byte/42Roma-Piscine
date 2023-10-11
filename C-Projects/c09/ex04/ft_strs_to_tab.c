#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '/0')
	return (i);
}

char *ft_strndup(char *str, int dim)
{
	int	i;
	char *dest;

	dest = (char *) malloc (sizeof(char) * (dim + 1));
	i = -1;
	while (str[++i] != '\0')
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}


struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*res;
	int	i;

	res = (t_stock_str *) malloc (sizeof(t_stock_str) * (ac + 1));
	if (!res)
		return (0);
	i = -1;
	while (++i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i][0];
		res[i].copy = ft_strndup(av[i], res[i].size);
	}
	res[i].str = 0;
	return(res);
}