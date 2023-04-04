/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduraes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:31:45 by aduraes           #+#    #+#             */
/*   Updated: 2023/02/10 13:43:33 by aduraes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 45;
	b = 7;
	*pa = &a;
	*pb = &b;
	ft_ultimate_div_mod(pa, pb);
	printf("%d\n%d\n", a, b);
	return (0);
}*/
