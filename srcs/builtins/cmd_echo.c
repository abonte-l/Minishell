/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_echo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:02:12 by abonte-l          #+#    #+#             */
/*   Updated: 2022/06/22 15:19:12 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void	builtin_echo(int option, char **built_in)
{

	size_t size = ft_tabsize(built_in);
	//printf("%li\n", size);	
		if (option == TRUE)
		{
			if (size > 2)
				printf("%s", built_in[2]);
			else
				printf("%c",7);
		}
					
		else
		{
			if (size > 1)
				printf("%s\n", built_in[1]);
			else
				printf("\n");
		}
			
			

}