#include "libft.h"

int	main()
{
	char src[] = "coucou";
	char dest[10];

	//printf("%zu\n", strlcpy(dest, src, 0));
	//printf("%zu\n", ft_strlcpy(dest, src, 0));

	printf("%zu\n", strlcpy(dest, src, 1));
	printf("%zu\n", ft_strlcpy(dest, src, 1));
}