/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/02/15 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ************************************************************************** */
/* ************************************************************************** */
/* **************************************************************************

• Здесь мы имеем дело с программой, поэтому в вашем файле .c должна быть функция main.
• Создать программу, которая отображает заданные аргументы в обратном порядке.
• Должны отображаться все аргументы, кроме argv [0].
• Все аргументы должны иметь свою собственную строку.

   ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

/* ************************************************************************** */

void	ft_putchar(char c);

/* ************************************************************************** */

int	main(int argc, char **argv)
{
	int	i;
	int	z;

	i = argc - 1;
	z = 0;
	while (i > 0)
	{
		while (argv[i][z])
		{
			ft_putchar(argv[i][z]);
			z++;
		}
		ft_putchar('\n');
		z = 0;
		i--;
	}
	return (0);
}


/* ************************************************************************** */
/* ******************************_ИЛИ_*************************************** */
/* ************************************************************************** */

void	ft_putchar(char c);

/* ************************************************************************** */

int 	main(int argc, char *argv[])
{
	int i;

	i = argc;
	while (i-- > 1)
	{
		while (*argv[i] != '\0')
		{
			ft_putchar(*argv[i]);
			*argv[i]++;
		}
		ft_putchar('\n');
	}
	return (0);
}

/* ************************************************************************** */
/* ******************************_ИЛИ_*************************************** */
/* ************************************************************************** */

void	ft_putchar(char c);

/* ************************************************************************** */


int		main(int argc, char **argv)
{
	int	i;
	int n;

	i = argc - 1;
	while (i > 0)
	{
		n = 0;
		while (argv[i][n] != '\0')
		{
			ft_putchar(argv[i][n]);
			n++;
		}
		ft_putchar('\n');
		i--;
	}
}


/* ************************************************************************** */
/* ******************************_ИЛИ_*************************************** */
/* ************************************************************************** */

void	ft_putchar(char c);

/* ************************************************************************** */


int		main(int argc, char *argv[])
{
	int i;
	int y;

	if (argc > 1)
	{
		i = argc - 1;
		while (i > 0)
		{
			y = 0;
			while (argv[i][y] != '\0')
			{
				ft_putchar(argv[i][y]);
				y++;
			}
			ft_putchar('\n');
			i--;
		}
	}
}


/* ************************************************************************** */
/* ******************************_ИЛИ_*************************************** */
/* ************************************************************************** */

void	ft_putchar(char c);

/* ************************************************************************** */


int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (--argc)
	{
		while (argv[argc][i])
			ft_putchar(argv[argc][i++]);
		i = 0;
		ft_putchar('\n');
	}
	return (0);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
