/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:48:06 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/11/08 16:26:55 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n != 0)
	{
		n = (n / 10);
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		n_len;
	long	n_long;
	char	*dest;

	n_long = n;
	n_len = len(n_long);
	dest = malloc(sizeof(char) * (n_len + 1));
	if (!dest)
		return (NULL);
	if (n_long < 0)
	{
		n_long *= -1;
		dest[0] = '-';
	}
	if (n_long == 0)
		dest[n_len - 1] = '0';
	dest[n_len] = '\0';
	while (n_long != 0)
	{
		dest[n_len - 1] = (n_long % 10) + '0';
		n_len--;
		n_long = n_long / 10;
	}
	return (dest);
}
/*int main()
{
	printf("%s\n", ft_itoa(-1));
	return (0);
}*/
