#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c);

int	main()
{
	printf("%c\n", tolower('Z'));
	printf("%c\n", ft_tolower('Z'));
}