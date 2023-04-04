/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduraes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:32:39 by aduraes           #+#    #+#             */
/*   Updated: 2023/02/10 13:57:26 by aduraes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// DELETE não é um char imprimível
int	is_printable(int character)
{
	if (character >= 32 && character <= 126)
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int	counter;
	int	printable;

	counter = 0;
	printable = 1;
	while (str[counter] && printable == 1)
	{
		if (printable == 1)
			printable = is_printable(str[counter]);
		counter++;
	}
	return (printable);
}

int main(void)
{
    char	str1[10];
	char	*str2;
	char	*str3;
	int		empty;
	int		printable;
	int		non_printable;

	str2 = "*'`";
	str3 = "\n";
	printf("String  Output\n");
	empty = ft_str_is_printable(str1);
	printf("Empty %d\n", empty);
	printable = ft_str_is_printable(str2);
	printf("Printable %d\n", printable);
	non_printable = ft_str_is_printable(str3);
	printf("Non printable %d\n", non_printable);
	return (0);
}