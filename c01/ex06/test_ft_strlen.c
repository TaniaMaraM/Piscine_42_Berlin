#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str);

int	main()
{
	char *c = "Hello";
	printf("%d\n", ft_strlen(c));
    return 0;
}