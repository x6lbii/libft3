/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 03:06:54 by saealzaa          #+#    #+#             */
/*   Updated: 2022/06/07 03:51:11 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	i;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
	{
		substr = malloc(sizeof(char));
		substr[0] = '\0';
		return (substr);
	}
	slen = ft_strlen(s) - start;
	if (slen > len)
		slen = len;
	substr = malloc(sizeof(char ) * (slen + 1));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < slen)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
