#include <unistd.h>

char	ft_putchar(char c)
{
	size_t i;

	i = write(1, &c, 3);
	(void)i;
	return (0);
}
