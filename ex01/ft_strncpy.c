/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoko <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:50:36 by enoko             #+#    #+#             */
/*   Updated: 2020/06/26 10:53:55 by enoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;
	while(src[i] != '\0' || i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[n] = '\0';
	return dest;

}
int main()
{
	char p[10] = "fifty\n";
	char s[10];
	ft_strncpy(s ,p ,3);
	printf("%s", s);
	return 0;
}

