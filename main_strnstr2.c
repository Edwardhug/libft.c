#include "libft.h"

int	main()
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";

	printf("%s\n", strnstr(haystack, "cd", 8));
	printf("%s\n", ft_strnstr(haystack, "cd", 8));

}