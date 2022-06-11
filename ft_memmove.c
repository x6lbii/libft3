/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 02:38:06 by saealzaa          #+#    #+#             */
/*   Updated: 2022/06/05 02:36:59 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*destination;
	char	*source;

	source = (char *)src;
	destination = (char *)dst;
	if (dst == src)
		return (dst);
	while (len--)
	{
		if (dst > src)
			destination[len] = source[len];
		else
			*destination++ = *source++;
	}
	return (dst);
}
