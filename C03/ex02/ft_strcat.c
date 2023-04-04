/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduraes <aduraes@student.42.fr>          +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:19:15 by aduraes          #+#    #+#              */
/*   Updated: 2023/02/07 17:24:03 by aduraes         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*int main()
{
  char str1[] = "My name is Aline, ";
  char str2[] = "and u are?";
  ft_strcat(str1,str2);
  printf("%s",str1);
}
*/
