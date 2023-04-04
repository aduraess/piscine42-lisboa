/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduraes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:32:11 by aduraes           #+#    #+#             */
/*   Updated: 2023/02/10 11:27:07 by aduraes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str [i]!= '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char	*x;

	x = "TUDO";
	ft_putstr(x);
	return (0);
}*/