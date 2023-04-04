/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:04:32 by mmaria-d          #+#    #+#             */
/*   Updated: 2023/01/29 19:59:15 by mmaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y);

int	touatoa(char *str)
{
	int	res;

	if (*str < '0' || *str > '9')
		return (0);
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		if (res >= 214748365 || (res == 214748364 && *str >= '8'))
			return (0);
		res = res * 10 + (*str - '0');
		str++;
	}
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (res);
}

void	printstring(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	error_msg(void)
{
	printstring("Ops!! Those are not valid inputs!!\n");
	printstring("Give me two numbers from 1 to 2147483647!!\n");
}	

int	main(int ac, char **av)
{
	int	x;
	int	y;

	if (ac == 3)
	{
		x = touatoa(av[1]);
		y = touatoa(av[2]);
		if (x == 0 || y == 0)
			error_msg();
		else
			rush(x, y);
	}
	else
		error_msg();
	return (0);
}
