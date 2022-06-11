/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 07:21:09 by saealzaa          #+#    #+#             */
/*   Updated: 2022/06/07 02:51:06 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*destination;
	char	*source;

	source = (char *)src;
	destination = (char *)dst;
	if (!dst && !src)
	{
		return (0);
	}
	i = 0;
	while (i < n)
	{
		(destination[i] = source[i]);
		i++;
	}
	return (dst);
}
