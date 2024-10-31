/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:19:24 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/31 16:43:30 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{   
    size_t i;

    i = 0;
    if (size > 0)
    {
        while (src[i] && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    while (src[i])
        i++;
    return (i);
}

int main()
{
    char b[] = "hello";
    char a[6];  // Declarado com 6 para ter certeza de que há espaço para o nulo
    printf("%zu\n", ft_strlcpy(a, b, 5)); // Retorna o comprimento de b
    printf("%s\n", a);  // Mostra o conteúdo de a para verificar o que foi copiado
    return (0);
}   
