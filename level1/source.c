#include <stdlib.h>
#include <stdio.h>

int run()
{
	fwrite("Good... Wait what?\n", 1, 19, stdout);
	return(system("/bin/sh"));
}

int main()
{
	char buf[64];
	gets(buf);
	return(0);
}
