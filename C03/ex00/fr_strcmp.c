/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduraes <aduraes@student.42.fr>          +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:15:54 by aduraes          #+#    #+#              */
/*   Updated: 2023/02/07 16:24:20 by aduraes         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int main ()
{
   char s1[] = "Amarelo";
   char s2[] = "Amarela";
   printf("%d",ft_strcmp(s1,s2));
}
*/
