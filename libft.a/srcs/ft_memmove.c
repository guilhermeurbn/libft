/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:31:42 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/29 18:06:14 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t len)
{
    unsigned char *c_src;
    unsigned char *c_dest;

    if(!src || !dest)
        return NULL;
    
    c_src = (unsigned char *)src;
    c_dest = (unsigned char *)dest;
    
    if (c_dest > c_src)
    {
        while (len > 0)
        {
            ((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
            len--;
        }
    }
    else
    {
        while (len > 0)
        {
            ((unsigned char *)dest)[len - 1] = ((unsigned char *)src)[len - 1];
            len--;
        }
    }
    return (dest);
}
int main()
{
    char src[50] = "Hello, World!";
    char dest[50] = "Goodbye, World!";
    
    printf("%s", (char *)ft_memmove(dest, src, 3));
    return 0;
}