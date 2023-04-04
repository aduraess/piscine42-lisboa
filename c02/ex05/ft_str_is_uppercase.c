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

#include <stdio.h>

int	is_uppercase(char character)
{
	if (character >= 'A' && character <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	counter;
	int	upc;

	counter = 0;
	upc = 1;
	while (str[counter] && upc == 1)
	{
		if (upc == 1)
			upc = is_uppercase(str[counter]);
		counter++;
	}
	return (upc);
}

int main(void)
{
    char	str1[10];
	char	*str2;
	char	*str3;
	int		empty;
	int		upper;
	int		non_upper;

	str2 = "PAPA";
	str3 = "OI ";
	printf("String  Output\n");
	empty = ft_str_is_uppercase(str1);
	printf("Empty %d\n", empty);
	upper = ft_str_is_uppercase(str2);
	printf("Upper %d\n",	upper);
	non_upper = ft_str_is_uppercase(str3);
	printf("Non upper %d\n", non_upper);
	return (0);
}