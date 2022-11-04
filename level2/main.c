#include <stdlib.h>

void p(void)
{
	fflush(stdin);
	char buffer[76];
	gets(buffer);
	if (strcmp(buffer, '0xb0000000'))
		printf();
	else
		strdup(buffer);
	return ;
	
}


int main()
{
	p();
	return(0);
}
