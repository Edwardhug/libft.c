#include "libft.h"

int	main()
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	//int		a = 'd';

	printf("%s\n", memchr(s, 255 + 3, 3));

	printf("%s\n", ft_memchr(s, 255 + 3, 3));
}