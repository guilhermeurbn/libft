/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:37:30 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/31 18:39:40 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (s1[i] && s2[i] && i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    } 
    if (i == n)
        return (0);
    return (s1[i] - s2[i]);
}
int main()
{
    char str1[50] = "Hello, World!";
    char str2[50] = "Hello, World!";
    printf("%d\n", ft_strncmp(str1, str2, 5));
    return 0;
}