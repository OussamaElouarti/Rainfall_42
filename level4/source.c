#include <stdio.h>
#include <stdlib.h>

int		m = 0;

int     p(char *buffer)
{
	printf(buffer);
    return (0);
}


int		n()
{
	char	buffer[512];

	fgets(buffer, 512, stdin);
    p(buffer);
	if (m == 16930116)
		system("/bin/sh cat ../level5/.pass");
	return (0);
}

int		main()
{
	n();
	return (0);
}