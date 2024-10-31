/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:49:50 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/31 18:52:40 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}
#include <stdio.h>
int main()
{
    char str1[50] = "Hello, World!";
    char str2[50] = "Hello, World!";
    printf("%d\n", ft_memcmp(str1, str2, 5));
    return 0;
}