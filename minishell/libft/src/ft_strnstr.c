/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <iustoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:26:22 by iustoglu          #+#    #+#             */
/*   Updated: 2023/01/09 11:27:00 by iustoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] != '\0' && j + i < len)
			{
				if (big[i + j] == little[j] && little[j + 1] == '\0')
					return ((char *)&big[i]);
				else if (big[i + j] != little[j])
					break ;
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
