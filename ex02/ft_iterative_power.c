/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smosoeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:01:54 by smosoeu           #+#    #+#             */
/*   Updated: 2020/06/26 09:53:58 by smosoeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


int ft_iterative_power(int nb,  int power)
{
	int x;
	x = 1;

	for (int i = 0; i < power; x++)
		x = x * nb ;
	return x;
}



