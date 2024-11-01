/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:03:31 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/31 17:07:17 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlen(const char *str) 
{
    size_t len;
    
    len = 0;
    while (str[len]) 
        len++;
    return (len);
}
size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t dest_len;
    size_t src_len;

    i = 0;
    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);

   
    if (dest_len >= size)
        return (size + src_len);
        
    i = dest_len; 
    j = i + 1;
    while (src[j] && (j < size ))
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest_len + src_len);
}
int main()
{
   char a[50] = "hel";
   char b[50] = "world";
   
    printf("o tamanho das duas ficam: %zu bytes", ft_strlcat(a, b, 20));
    return 0;
}