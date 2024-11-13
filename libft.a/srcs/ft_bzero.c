/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:53:36 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/11/13 17:36:10 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//transformando n bytes da str em 0;
void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
/*int main()
{
	char str[14] = "Hello, World!";
	ft_bzero(str, 5);
	int i = 0;
	while (i < 13)
	{
		if (str[i] == '\0')
			printf("0");
		else
			printf("%c", str[i]);

		i++;
	}
	return 0;
}*/
