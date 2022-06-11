/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 05:47:00 by saealzaa          #+#    #+#             */
/*   Updated: 2022/06/05 05:44:01 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dl;
	size_t	sl;

	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	i = 0;
	j = dl;
	if (dl < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && dl + i < dstsize - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dl >= dstsize)
	{
		dl = dstsize;
	}
	return (dl + sl);
}
