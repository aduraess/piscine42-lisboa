/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:03:58 by mmaria-d          #+#    #+#             */
/*   Updated: 2023/01/28 17:30:28 by mmaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int wid, char left, char mid, char right)
{
	int	i;

	i = 0;
	while (i < wid)
	{
		if (i == 0)
			ft_putchar(left);
		else if (i < wid - 1)
			ft_putchar(mid);
		else
			ft_putchar(right);
		i++;
	}
}

void	rush(int x, int y)
{	
	int	i;

	i = 0;
	if (x >= 0 && y >= 0)
	{
		while (i < y)
		{
			if (i == 0)
				print_line(x, 'A', 'B', 'C');
			else if (i < y - 1)
				print_line(x, 'B', ' ', 'B');
			else
				print_line(x, 'A', 'B', 'C');
			ft_putchar('\n');
			i++;
		}
	}
}
