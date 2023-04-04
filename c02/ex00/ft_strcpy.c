/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduraes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:29:07 by aduraes           #+#    #+#             */
/*   Updated: 2023/02/10 12:04:21 by aduraes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* Se a cadeia de destino de um strcpy() não for suficientemente grande, então qualquer coisa 
pode acontecer. O Over‐flowing e fixed-length string buffers são um cracker favorito, 
técnica para assumir o controle completo da máquina.  Sempre que um programa lê 
ou copia dados para um buffer, o programa precisa primeiro de verificar se há 
espaço suficiente.  Isto pode ser desnecessário se puder demonstrar que o overflow é
impossível, mas cuidado, pq os programas podem ser alterados ao longo do tempo, de formas que 
pode tornar o impossível possível.*/

int	main(void)
{
/* Apenas 4 caracteres podem ser escritos no str1 porque o último elemento é tomado por \0 */
	char	str1[5] = "tempo"; 
	char	str2[100];

	ft_strcpy(str2, "amigo");
	printf("String 1: %s\nString 2: %s\n\n", str1, str2); //Basicamente, cada %s será substituído pelo argumento da função correspondente printf %s
	ft_strcpy(str2, str1);
	printf("String 1: %s\nString 2: %s\n", str1, str2);
	return (0);
}
