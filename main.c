#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char *test = "teste";
	
	printf("miguel bacana %s %p\n", test, &test);
	ft_printf("miguel bacana %s %p\n", test, &test);

	printf("hexa origin  %x %x\n", test, &test);
	ft_printf("hexa %x %x\n", test, &test);

	return (0);
}

