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

/* A diferença entre letras maiúsculas e minúsculas em ASCII é 32 (decimal).
Letras maiúsculas são menores em valor decimal . */
char	lowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

char	upcase(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (counter == 0)
			str[counter] = upcase(str[counter]);
		else if (str[counter - 1] >= ' ' && str[counter - 1] <= '/')
			str[counter] = upcase(str[counter]);
		else if (str[counter - 1] >= ':' && str[counter - 1] <= '@')
			str[counter] = upcase(str[counter]);
		else if (str[counter - 1] >= '[' && str[counter - 1] <= '`')
			str[counter] = upcase(str[counter]);
		else if (str[counter - 1] >= '{' && str[counter - 1] <= '~')
			str[counter] = upcase(str[counter]);
		else
			str[counter] = lowcase(str[counter]);
		counter++;
	}
	return (str);
}

/*  Para que uma string seja modificável, ela precisa ser declarada com char str[]
de char *str */
int	main(void)
{
	char	str[] = "Belo Horizonte";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}