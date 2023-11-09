#include <unistd.h>
#include <stdio.h>

int	str_printer(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count += write(1, &str[count], 1);
	return (count);
}

int	main(void)
{
	int count = 0;
	char str[10] = "HELLO";
	count = str_printer(str);
	printf("\ncount = %d\n", count);
}