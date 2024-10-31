/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:31:42 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/30 21:22:38 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t len)
{
    if (!dest && !src)
        return (NULL);
         
    if (dest < src)
    {
        while (len > 0)
        {   
            
            ((char *)dest)[len - 1] = ((char *)src)[len - 1];
            len--;
              
        }
    }
    else
    {
        while (len > 0)
        {
            ((char *)dest)[len] = ((char *)src)[len];
            len--;
        }
    }
    return (dest);
}
int main()
{
    char src[50] = "world!";
    char dest[50] = "hello";
    
    printf("%s", (char *)ft_memmove(dest, src, 3));
    return 0;
}