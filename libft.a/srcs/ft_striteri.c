/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:59:55 by guisanto          #+#    #+#             */
/*   Updated: 2024/11/13 17:53:40 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
static void upper(unsigned int i, char *c)
{//coloca o i para ser "usado"
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}
int main()
{
	char str[] = "hello";

	ft_striteri(str, upper);
	printf("%s", str);
	return (0);
}
