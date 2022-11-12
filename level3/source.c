#include <stdio.h>
#include <stdlib.h>

int		m = 0;

int		v()
{
	char	buffer[512];

	fgets(buffer, 512, stdin);
	printf(buffer);
	if (m == 64)
	{
		fwrite("Wait what?!\n", 1, 12, stdout);
		return(system("/bin/sh"));
	}
	return (0);
}

int		main()
{
	v();
	return (0);
}