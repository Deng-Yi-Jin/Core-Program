/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:32:48 by djin              #+#    #+#             */
/*   Updated: 2023/04/30 11:19:10 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size > 0)
	{
		while (dest[i] && i < size)
			i++;
		while (src[j] && i < (size - 1))
			dest[i++] = src[j++];
		dest[i] = '\0';
	}
	while (src[j])
		j++;
	return (i + j);
}

/*int main(void)
{
    char dest[100] = "Text";
    char src[5] = "Text";
    
    printf("%d", ft_strlcat(dest, src, 4));
}*/