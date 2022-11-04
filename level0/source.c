#include <unistd.h>
#define _GNU_SOURCE
#include <sys/types.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	if (atoi(argv[1]) == 423)
	{
		gid_t gid = getegid();
		uid_t uid = geteuid();
		//setresgid(gid, gid, gid); for linux
		//setresuid(uid, uid, uid); for linux
		setruid(uid); // for macos
		setrgid(gid); // for macos
		execv("/bin/sh", NULL);		
	}
	else 
	{
		write(1, "No !\n", 5);
	}
	return (0);
}
