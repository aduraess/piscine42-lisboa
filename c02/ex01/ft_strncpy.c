/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduraes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:29:49 by aduraes           #+#    #+#             */
/*   Updated: 2023/02/10 12:13:07 by aduraes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* 
Array: comprimento != (igual ou diferente que) tamanho
comprimento -> quantidade de elementos escritos
tamanho -> quantidade de elementos escritos + \0 no final
strncpy toma como parâmetro o tamanho n do destino.
No máximo n bytes de src são copiados. Advertência: Se não houver byte nulo entre
os primeiros n bytes de src, a corda colocada em dest não será nula.
Se o comprimento do src for menor que n, strncpy() escreve bytes nulos adicionais
para destinar para garantir que um total de n bytes seja escrito.
As funções strcpy() e strncpy() devolvem um ponteiro para o destino
dest. de cordas*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/* Se a cadeia de destino de um strcpy() não for suficientemente grande, então qualquer coisa 
pode acontecer. O Over‐flowing fixed-length string buffers é um cracker favorito. 
técnica para assumir o controle completo da máquina.  A qualquer momento um programa lê 
ou copia dados para um buffer, o programa precisa primeiro verificar se há 
espaço suficiente.  Isto pode ser desnecessário se você puder mostrar que o transbordo é
impossível, mas tenha cuidado: os programas podem ser mudados com o tempo, de forma que 
pode tornar o impossível possível.*/

int	main(void)
{
/* Apenas 4 caracteres podem ser escritos no str1 porque o último elemento é tomado por \0 */
	char	str1[5] = "minas"; 
	char	str2[6];
	int		n;

	n = 6;
	ft_strncpy(str2, "amigo", n);
	printf("String 1: %s\nString 2: %s\n\n", str1, str2);
	ft_strncpy(str2, str1, n);
	printf("String 1: %s\nString 2: %s\n", str1, str2);
	return (0);
}