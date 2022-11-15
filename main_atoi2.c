#include "libft.h"

int	main()
{
	char escape[] = {9, 10, 11, 12, 13, 0};
	string e(escape);

	printf("%c\n", atoi((e + "1").c_str()));
	printf("%c\n", ft_atoi((e + "1").c_str()));
}