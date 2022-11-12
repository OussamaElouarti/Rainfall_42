#include <stdio.h>
#include <stdlib.h>

int		m = 0;

int     o(char *buffer)
{
	system("/bin/sh");
    exit(1);
}


int		n()
{
	char	buffer[512];

	fgets(buffer, 512, stdin);
    printf(buffer);
    exit(1);
}

int		main()
{
	n();
	return (0);
}