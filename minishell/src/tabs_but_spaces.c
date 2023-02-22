/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabs_but_spaces.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <iustoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:47:24 by iustoglu          #+#    #+#             */
/*   Updated: 2023/01/09 11:18:46 by iustoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"minishell.h"

static int	ft_check(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] && (arg[i] == ' ' || arg[i] == '\t'))
		i++;
	return (i - 1);
}

static char	*ft_space(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	--i;
	while (i > 0 && s[i] == ' ')
	{
		s[i] = '\0';
		i--;
	}
	return (s);
}

char	*ft_process(char *arg)
{
	char	*s;
	int		j;
	int		i;

	i = 0;
	s = (char *)malloc(sizeof(char) * (ft_strlen(arg) + 1));
	j = ft_check(arg) + 1;
	while (arg[j])
	{
		while (arg[j] && (arg[j] == ' ' || arg[j] == '\t') && arg[j + 1] && \
			(arg[j + 1] == ' ' || arg[j + 1] == '\t'))
		j++;
		if (arg[j] && arg[j] == '\t')
			arg[j] = ' ';
		s[i++] = arg[j++];
	}
	s[i] = '\0';
	s = ft_space(s);
	return (s);
}
