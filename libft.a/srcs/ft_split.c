/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:37:56 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/11/08 15:43:25 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int conta_c(const char *palavra, char letra)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (palavra[i])
    {
        if (palavra[i] == letra)
            count++; 
        i++;  
    }
    return (count);
}
char	*word_corpo(const char *str, int inicio, int fim)
{
    char    *word;
    int     i;
        
    i = 0;
    word = malloc((fim - inicio + 1) * sizeof(char));
    if (!word)
        return (NULL);
    while (inicio < fim)
    {
        word[i] = str[inicio];
        inicio++;
        i++;
    }
    word[i] = '\0';
    return (word);
}
char **ft_split(char const *s, char c)
{
    char    **dest;
    size_t  i;
    size_t  j;
    size_t  len;
    int     index;
    
    i = 0;
    j = 0;
    len = ft_strlen(s);
    index = -1;
    if (!s || !(dest =  malloc((conta_c(s, c) + 2) * sizeof(char *))))
        return (NULL);
    while (i <= len)
    {
        if (s[i] != c && index < 0)
            index = i;
        else if ((s[i] == c || i == len) && index >= 0)
        {
            dest[j++] = word_corpo(s, index, i);
            index = -1;
        }
        i++;
    }
    dest[j] = NULL;
    return (dest);
}
/* int main ()
{
    char s[] = "h elelo e world";
    int i = 0;
    char **result;
    
    result = ft_split(s, 'e');

    while(result[i])
    {
        printf("%s", (result[i]));
        free(result[i]);
        i++;
    }
    // Libera a memória
    free(result);
    return (0);
} */