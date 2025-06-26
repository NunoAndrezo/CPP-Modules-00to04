#include <iostream>

int	main(int ac, char **av)
{
	int	i = 1;
	int	j = 0;
	if (ac > 1)
	{
		while (i < ac)
		{
			/*if (i != 1)
				std::cout << " ";*/
			j = 0;
			while (av[i][j])
			{
				if (av[i][j] >= 'a' && av[i][j] <= 'z')
					av[i][j] -= 32;
				std::cout << av[i][j];
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
