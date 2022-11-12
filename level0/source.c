#include <unistd.h>
#define _GNU_SOURCE
#include <sys/types.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	if (atoi(argv[1]) == 423)
	{
		char* args = strdup("/bin/sh");
		gid_t gid = getegid();
		uid_t uid = geteuid();
		setresgid(gid, gid, gid); 
		setresuid(uid, uid, uid);
		execv("/bin/sh", &args);		
	}
	else 
	{
		fwrite("No !\n", 1, 5, STDERR_FILENO);
	}
	return (0);
}
