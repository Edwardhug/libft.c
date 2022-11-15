#include "libft.h"

int	main()
{
	size_t	count = 2147;
	size_t	size = 64;

	printf("%s\n", calloc(count, size));
	printf("%s\n", ft_calloc(count, size));
}