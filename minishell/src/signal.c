/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <iustoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:04:28 by iustoglu          #+#    #+#             */
/*   Updated: 2023/01/09 11:18:31 by iustoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./minishell.h"

int	g_status;

void	handle_sigint(int sig)
{
	if (sig == SIGINT)
	{
		g_status = 1;
		ioctl(STDIN_FILENO, TIOCSTI, "\n");
		rl_replace_line("", 0);
		rl_on_new_line();
	}
}
