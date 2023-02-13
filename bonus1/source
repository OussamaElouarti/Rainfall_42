#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int     main(int argc, char ** argv)
{
    int n;
    char buffer[40];
    int nb;

    nb = atoi(argv[1]);
    if (nb < 10)
    {
        memcpy(buffer,argv[2], nb *4);
        if (nb == 0x574f4c46)
            execl("/bin/sh", "sh", 0);
        n = 0;
    }
    else
        n = 1;
    return (n);
}