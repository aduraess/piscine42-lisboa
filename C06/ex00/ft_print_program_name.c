/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduraes <aduraes@student.42.fr>          +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:01:21 by aduraes          #+#    #+#              */
/*   Updated: 2023/02/12 11:03:16 by aduraes         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	show_name(char *nome)
{
	int	i;

	i = 0;
	while (nome[i] != '\0')
	{
		write(1, &nome[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

/*
int	main(int argc, char **argv)
{
	(void) argc;
	show_name(argv[0]);
	return (0);
}
*/
