/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduraes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:40:19 by aduraes           #+#    #+#             */
/*   Updated: 2023/02/06 15:54:51 by aduraes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ajoutvirgule(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int	num[3];

	num[0] = '0';
	while (num[0] <= '7')
	{
		num[1] = '0';
		while (num[1] <= '8')
		{
			num[2] = '0';
			while (num[2] <= '9')
			{
				if (num[0] < num[1] && num[1] < num[2])
				{
					ft_putchar(num[0]);
					ft_putchar(num[1]);
					ft_putchar(num[2]);
					if (! (num[0] == '7' && num[1] == '8' && num[2] == '9'))
						ft_ajoutvirgule();
				}
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
