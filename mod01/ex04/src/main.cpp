#include "../inc/sed_is_for_losers.hpp"
#include "../inc/files_handler.hpp"

int	main(int ac, char **av)
{
	Helper helper;

	if (!parser(ac, av, &helper))
		return (1);
	handle_files(av, &helper);
	return (0);
}
