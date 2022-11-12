#include <stdio.h>
#include <stdlib.h>

int		m = 0;

int     o(char *buffer)
{
	system("/bin/sh");
    return (0);
}


int		n()
{
	char	buffer[512];

	fgets(buffer, 512, stdin);
    printf(buffer);
    return (0);
}

int		main()
{
	n();
	return (0);
}