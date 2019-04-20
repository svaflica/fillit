/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:13:44 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/20 11:49:33 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {

    __int128 i = 3402823669209384634633;

	int iter = 1;

	printf("%llu\n", i);
	while (i)
	{
		printf("%d :  %lld\n", iter, i & 1);
		iter++;
		i >>= 1;
	}

    return 0;
}
