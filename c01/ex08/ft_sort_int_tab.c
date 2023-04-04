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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	buffer;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				buffer = tab[i];
				tab[i] = tab[j];
				tab[j] = buffer;
			}
			j++;
		}
		i++;
	}
} /* Apontadores para a morada do primeiro elemento da matriz */

/*int	main(void)
{
	int	tab[5];
	int	size;
	int	i;

	tab[0] = 7;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = -5;
	tab[4] = -1;
	size = 5;
	for (i = 0; i < size; i++)
		printf("%d\n", tab[i]);
	ft_sort_int_tab(tab, size);
	printf("\n");
	for (i = 0; i < size; i++)
		printf("%d\n", tab[i]);
	return (0);
}*/