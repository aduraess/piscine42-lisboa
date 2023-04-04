/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduraes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:30:15 by aduraes           #+#    #+#             */
/*   Updated: 2023/02/10 13:04:28 by aduraes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alpha(char character)
{
	if (character >= 'A' && character <= 'Z')
		return (1);
	else if (character >= 'a' && character <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	counter;
	int	alpha;

	counter = 0;
	alpha = 1;
	while (str[counter] && alpha == 1)
	{
		if (alpha == 1)
			alpha = is_alpha(str[counter]);
		counter++;
	}
	return (alpha);
}

int	main(void)
{
	char	str1[10];
	char	*str2;
	char	*str3;
	int		empty;
	int		alpha;
	int		non_alpha;

	str2 = "gerais";
	str3 = "mina";
	printf("String  Output\n");
	empty = ft_str_is_alpha(str1);
	printf("Empty %d\n", empty);
	alpha = ft_str_is_alpha(str2);
	printf("Alpha %d\n", alpha);
	non_alpha = ft_str_is_alpha(str3);
	printf("Non alpha %d\n", non_alpha);
	return (0);
	}