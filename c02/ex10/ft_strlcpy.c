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

/* strncpy
No máximo n bytes de src são copiados. Aviso: Se não houver nenhum byte nulo entre
os primeiros n bytes de src, a string colocada em dest não terá terminação nula.
Se o comprimento de src for menor que n, strncpy() grava bytes nulos adicionais
para dest para garantir que um total de n bytes seja gravado.
strlcpy
Ao contrário de strncpy, strlcpy pega o tamanho total da string de destino e
sempre grava um único byte NUL no destino (se o tamanho não for zero). O
string resultante tem a garantia de ser terminada em NUL, mesmo se truncada.
Também não perde tempo escrevendo vários bytes NUL para
preencha o restante do buffer, ao contrário de strncpy. Observe que um byte para o NUL
deve ser incluído no tamanho. Observe também que strlcpy() e strlcat() apenas
operar em cordas “C” verdadeiras. Isso significa que para strlcpy() src deve ser NUL-
encerrado.
As funções strlcpy() e strlcat() retornam o comprimento total da string
eles tentaram criar. Para strlcpy() isso significa o comprimento de src.
*/

int	length(char *src)
{
	int		i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (length(src));
}
/* Se a string de destino de um strcpy() não for grande o suficiente, qualquer coisa
pode acontecer. O Over‐flowing fixed-length string buffers é um cracker favorito técnica para assumir o controle total da máquina. Sempre que um programa lê
ou copia dados em um buffer, o programa primeiro precisa verificar se há
espaco suficiente. Isso pode ser desnecessário se você puder mostrar que estouro é
impossível, mas tenha cuidado: os programas podem ser alterados ao longo do tempo, de forma que pode tornar o impossível possível. */

int	main(void)
{
/* Apenas 4 caracteres podem ser escritos no str1 porque o último elemento é tomado por \0 */
	char	str1[5] = "amor"; 
	char	str2[1];
	int		n;
	int		l;

	n = 0;
	l = ft_strlcpy(str2, "buenodfsg", n);
	printf("String 1: %s\nString 2: %s\nSource length: %d\n\n", str1, str2, l);
	l = ft_strlcpy(str2, str1, n);
	printf("String 1: %s\nString 2: %s\nSource length: %d\n\n", str1, str2, l);
	return (0);
}