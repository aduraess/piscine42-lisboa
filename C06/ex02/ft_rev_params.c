/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduraes <aduraes@student.42.fr>          +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:34:19 by aduraes          #+#    #+#              */
/*   Updated: 2023/02/15 13:41:56 by aduraes         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_show(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
	write(1, "\n", 1);
}

/*
int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (i > 1)
	{
		ft_show(argv[i - 1]);
		i--;
	}
}
*/