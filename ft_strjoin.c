/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 03:51:41 by saealzaa          #+#    #+#             */
/*   Updated: 2022/06/11 03:56:18 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	total1(char const *s1, char const *s2)
{
	int	s1_len;
	int	s2_len;
	int	total;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total = s1_len + s2_len;
	return (total);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		total;
	int		i;
	int		j;

	if (!s1)
		return (NULL);
	total = total1(s1, s2);
	i = 0;
	new = malloc(sizeof(char) * (total + 1));
	if (new == NULL)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		new[i++] = s2[j++];
	new[total] = '\0';
	return (new);
}

// int main()
// {
// 	char s1[] = "saeed ";
// 	char s2[] = "alzaabi";
// 	char *a = ft_strjoin(s1,s2);
// 	printf("%s\n", a);
// }