#include <unistd.h>
int main()
{

    int m = 0;

    if ( m == 64)
        write(1, "c\n", 2);
    return(0);
}
