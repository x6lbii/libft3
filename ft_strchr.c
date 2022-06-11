/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 02:58:21 by saealzaa          #+#    #+#             */
/*   Updated: 2022/06/11 03:45:52 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	sa;

	str = (char *)s;
	sa = (char )c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == sa)
		{
			return (&str[i]);
		}
		i++;
	}
	if (sa == '\0')
		return (&str[i]);
	return (NULL);
}
