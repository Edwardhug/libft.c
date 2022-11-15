#include "libft.h"

int	main()
{
	char	str[] = "hello world";
	char	needle  [] = " ";
	size_t	len = 11;

	printf("%s\n", strnstr(str, needle, len));
	printf("%s\n", ft_strnstr(str, needle, len));
}