/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smosoeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:01:05 by smosoeu           #+#    #+#             */
/*   Updated: 2020/06/26 09:26:17 by smosoeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb) {

	if (nb <= 5) {

		nb =nb +1 ;
		ft_iterative_factorial(nb);
		return (0);
	}
	    else
		{
			return(0);
		}
}


