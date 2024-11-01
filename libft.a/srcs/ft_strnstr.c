/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:54:00 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/31 21:53:35 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;

    if (!*needle)
        return ((char *)haystack);
    while (haystack[i] && i < len)
    {
        j = 0;
        while (needle[j] && haystack[i + j] == needle[j] && i + j < len)
            j++;
        if (!needle[j])
            return ((char *)&haystack[i]);
        i++;
    }
    return (NULL);        
}
int main()
{
    char haystack[50] = "Hello, World!";
    char needle[50] = "World";
    printf("%s\n", ft_strnstr(haystack, needle, 12));
    return 0;
}