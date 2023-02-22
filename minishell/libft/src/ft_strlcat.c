/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <iustoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:09:17 by iustoglu          #+#    #+#             */
/*   Updated: 2023/01/09 11:25:23 by iustoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*ptr;
	size_t		i;

	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	ptr = dst + ft_strlen(dst);
	i = ft_strlen(dst);
	while (i < size - 1 && *src != '\0' && size >= 2)
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	if (size != 0)
		*ptr = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
