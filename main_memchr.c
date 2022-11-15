#include "libft.h"

int	main()
{
	char	str[] = "hello world";
	int		a = 'd';

	printf("%s\n", memchr(str, a, 5));
	printf("%s\n", ft_memchr(str, a, 5));
}