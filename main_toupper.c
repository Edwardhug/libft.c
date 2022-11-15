#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c);

int	main()
{
	printf("%c\n", toupper(''));
	printf("%c\n", ft_toupper(''));
}