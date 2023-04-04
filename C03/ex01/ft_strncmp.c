/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduraes <aduraes@student.42.fr>          +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:45:17 by aduraes          #+#    #+#              */
/*   Updated: 2023/02/07 17:32:28 by aduraes         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/* int main ()
 {
   char s1[] = "Amarelo";
   char s2[] = "Amarela";
   int n = 7;
   printf("%d",ft_strncmp(s1,s2,n));
 }
*/
