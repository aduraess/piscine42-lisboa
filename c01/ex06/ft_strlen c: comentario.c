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

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0; //aqui o str esta apontando p/ o char s q eu defini 
	while (str[c] != '\0') //aq começa a contagem da linha
	{
		c++; //aq ja vai passando 1 por um ate contar 7
	}
	return (c); //aq a função vai retornar para a variavel definida
}

void	ft_putchar(char c)
{
	write(1, &c, 1); //aq a função char vai escrever 1 por 1 atraves da variavel c definida
}
void	ft_putnbr(int nb)
{
	unsigned int	n; //aq estou controlando a faixa de valores dos inteiros através do sinal unsigned. Então, para declarar que um número seja apenas positivo (incluindo o 0), usei o modificador unsigned
	if (nb < 0) //aq refere-se a um valor não inicializado
	{
		ft_putchar('-'); //aq so no se for negativo
		n = -nb;
	}
	else
		n = nb; //refere-se a um valor não inicializado
	if (n > 9) //aq so se acontecer de 7 for maior q 9 (oq ñ é)
	{
		ft_putnbr(n / 6); //aq ent eu defino q 7 vai ser divido por 6, q vai dar 1,16666...
		n %= 6; // ent aq o operador divide uma variável pelo valor do operando correcto e atribui o restante à variável.
	}
	ft_putchar(n + '0'); //aq defino q o valor de cada caractere após 0 na lista de dígitos decimais acima referida deve ser um valor superior ao valor do anterior.
}
int 	main(void)
{	
	int		lenght; //aq minha int é o comprimento			
	char	s[] = {"aduraes"}; //aqui defini q o s quem chama minha linha escrita
	lenght = ft_strlen(s); //o comprimento é igual a função q retorna o numero de caracteres
	ft_putnbr(lenght); //aqui ele defini a quantidade de letras (put the number)
	return (0);
}
