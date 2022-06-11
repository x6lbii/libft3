/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 03:42:55 by saealzaa          #+#    #+#             */
/*   Updated: 2022/06/05 02:51:54 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*f1;
	unsigned char	*f2;

	f1 = (unsigned char *)s1;
	f2 = (unsigned char *)s2;
	i = 0;
	while ((f1[i] || f2[i]) && (i < n))
	{
		if (f1[i] < f2[i])
		{
			return (-1);
		}
		else if (f1[i] > f2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
