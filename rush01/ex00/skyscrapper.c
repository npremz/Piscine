#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_correct_nbr(int values[4][4], int grid[4][4], int pos_x, int pos_y)
{
	/*int i;
	int count;

	i = 0;
	count = 0;
	while (i < 4)
	{
		if (grid[pos_x][i] == pos_y)
			count++;
		if (count == 1)
			return (0);
		i++;
	}
	i = 0;
	count = 0;
	while (i < 4)
	{
		if (grid[i][pos_y] == pos_y)
			count++;
		if (count == 1)
			return (0);
		i++;
	}*/
	return(1);
}

void	ft_solve(int values[4][4], int grid[4][4], int pos_x, int pos_y)
{
	int i;
	int j;

	if (pos_x == 3 && pos_y == 3)
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				ft_putchar(grid[i][j] + '0');
				ft_putchar(' ');
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < 5)
		{
			j = 0;
			while (j < 5)
			{
				if (is_correct_nbr(values, grid, pos_x, j) == 1)
				{
					grid[i][j] = j + 1;
					if (pos_y == 3)
						ft_solve(values, grid, pos_x + 1, 0);
					else
						ft_solve(values, grid, pos_x, pos_y + 1);
				}
				j++;
			}
			i++;
		}
	}
}

int	main(void)
{
	int	values[4][4] = {{4, 3, 2, 1},
					{1, 2, 2, 2},
					{4, 3, 2, 1},
					{1, 2, 2, 2}};
	int grid[4][4];
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 5;
			j++;
		}
		i++;
	}
	ft_solve(values, grid, 0, 0);
	return (0);
}