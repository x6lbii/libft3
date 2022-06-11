/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 02:57:31 by saealzaa          #+#    #+#             */
/*   Updated: 2022/05/28 10:08:51 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*alts;

	alts = (char *)s;
	i = ft_strlen(s);
	if (c == '\0')
	{
		return (alts + i);
	}
	while (i != '\0')
	{
		if (alts[i] == (char)c)
		{
			return (alts + i);
		}
		i--;
	}
	if (s[0] == (char)c)
		return (alts);
	return (0);
}
