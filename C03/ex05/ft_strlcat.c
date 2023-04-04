/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduraes <aduraes@student.42.fr>          +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:10:45 by aduraes          #+#    #+#              */
/*   Updated: 2023/02/07 20:24:09 by aduraes         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int str_len(char *str)
{
  int i;
  i = 0;
  while(str[i] != '\0')
  {
    i++;
  }
  return(i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	src_len;
  unsigned int	dest_len;

	i = 0;
	x = 0;
	src_len = str_len(src);
  while(dest[i] != '\0')
  {
    i++;
  }
  dest_len = i;

  while(src[x] != '\0' && x < size - dest_len -1)
  {
    dest[i] = src[x];
    x++;
    i++;
  }
  dest[i] = '\0';
  return(src_len + dest_len);

}

/*
int main ()
{
  char src[] = "ABCDEF";
  char dest [] = "123";  printf("Result: %i\n", ft_strlcat(dest,src,10));
  printf("%s\n", dest);
}
*/