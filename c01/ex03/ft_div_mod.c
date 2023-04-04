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

void	ft_div_mod(int a, int b, int *div, int *mod) 
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 21;
	b = 9;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
        printf("%d\n%d\n", div, mod);
        return (0);
}*/


