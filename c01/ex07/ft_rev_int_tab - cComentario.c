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
/*Guardar o primeiro elemento num buffer. 
Guardar o valor do último elemento no primeiro.
Guardar o buffer no último elemento. 
repetir para o próximo par de elementos para dentro.
Parar a repetição antes do elemento do meio (troca do meio desnecessária;
após as trocas iriam de desfazer as operações anteriores.*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	buffer;

	i = 0;
	while (i < size / 2)
	{
		buffer = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = buffer;
		i++;
	}
}/* Apontador aponta para a morada do primeiro elemento da matriz*/

int	main(void)
{
	int	tab[5];
	int	size;
	int	i;

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = -4;
	tab[4] = -5;
	size = 5;
	ft_rev_int_tab(tab, size);
	for (i = 0; i < size; i++)
		printf("%d\n", tab[i]);
	return (0);
}