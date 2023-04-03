#include <stdio.h>
#include <string.h>

void	ft_print_draw(int max_len);
void	ft_print_text(char *str);

int	main(int argc, char *argv[])
{
	if (argc < 2) 
		return 0;
	ft_print_text(argv[1]);

	return (0);
}

void	ft_print_text(char *str)
{
	int i;
	int j;
	int len;
	int max_len;
	char word[100];

	i = 0;
	j = 0;
	max_len = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			// to break the hand
			word[len] = '\0';
			if (len > max_len)
				max_len = len;
			len = 0;
		} else if (str[i+1] == '\0')
		{
			// handle end of string
			word[len++] = str[i];
			word[len] = '\0';

			if (len > max_len)
				max_len = len;
		} else {
			word[len++] = str[i]; // add character to current word
		}
		i++;
	}

	// print the top draw
	ft_print_draw(max_len);

	// print the middle lines of the frame
	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			// handle word break
			word[len] = '\0';
			printf("* %s", word);
			j = strlen(word);
			while (j < max_len)
			{
				printf(" ");
				j++;
			}
			printf(" *\n");
			len = 0;
		} else if (str[i+1] == '\0')
		{
			// handle end of string
			word[len++] = str[i];
 			word[len] = '\0';
			printf("* %s", word);
			j = strlen(word);
			while (j < max_len)
			{
				printf(" ");
				j++;
			}
			printf(" *\n");
		} else
			word[len++] = str[i]; // add to current worrd
		i++;
	}
    // print the bottom drwa
	ft_print_draw(max_len);
}

void	ft_print_draw(int max_len)
{
	int	i;

	i = 0;
	while (i < max_len + 4)
	{
		printf("*");
		i++;
	}
	printf ("\n");
}
