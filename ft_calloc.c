/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 07:19:29 by saealzaa          #+#    #+#             */
/*   Updated: 2022/06/10 23:58:14 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*new;
	size_t	maxmax;

	maxmax = (size_t)-1;
	new = malloc(count * size);
	if (count > maxmax / size)
		return (NULL);
	else if (new == NULL)
		return (NULL);
	ft_bzero(new, count * size);
	return (new);
}
