/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduraes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:31:14 by aduraes           #+#    #+#             */
/*   Updated: 2023/02/09 12:34:35 by aduraes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdio.h>

int	is_num(char character)
{
	if (character >= '0' && character <= '9')
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	counter;
	int	num;

	counter = 0;
	num = 1;
	while (str[counter] && num == 1)
	{
		if (num == 1)
			num = is_num(str[counter]);
		counter++;
	}
	return (num);
}

int main(void)
{
    char	str1[10];
	char	*str2;
	char	*str3;
	int		empty;
	int		num;
	int		non_num;

	str2 = "12345";
	str3 = "8 ";
	printf("String  Output\n");
	empty = ft_str_is_numeric(str1);
	printf("Empty %d\n", empty);
	num = ft_str_is_numeric(str2);
	printf("Numeric %d\n", num);
	non_num = ft_str_is_numeric(str3);
	printf("Non num %d\n", non_num);
	return (0);
}
