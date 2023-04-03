/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blackjack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:03:02 by larcrist          #+#    #+#             */
/*   Updated: 2023/04/02 22:03:03 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		len;
	int		aces;
	int		sum;
	char	card;

	if (argc != 2)
	{
		printf("Usage: %s <hand>\n", argv[0]);
		return (1);
	}
	aces = 0;
	sum = 0;
	sum = 0;
	i = 0;
	len = strlen(argv[1]);
	while (i < len)
	{
	card = argv[1][i];
		if (card >= '2' && card <= '9')
			sum += card - '0';
		else if (card == 'T' || card == 'J' || card == 'Q' || card == 'K')
		{
			sum += 10;
		}
		else if (card == 'A')
		{
			aces++;
			sum += 11;
		}
		else
		{
			printf("Invalid card: %c\n", card);
			return (1);
		}
		i++;
	}
	while (sum > 21 && aces > 0)
	{
		sum -= 10;
		aces--;
	}
	if (sum == 21 && len == 2)
		printf("Blackjack!\n");
	else
		printf("%d\n", sum);
	return (0);
}
