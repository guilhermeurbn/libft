/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:02:47 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/29 11:52:02 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
   size_t i;
   if (!b)
       return (NULL);
    i = 0;
    while (i < len)
    {
        ((unsigned char *)b)[i] = (unsigned char)c;
        i++;
    }
    return (b);
}
int main()
{
    char str[50] = "Hello, World!";
    printf("%s", (char *)ft_memset(str, 'a', 30));
    return 0;
}

    