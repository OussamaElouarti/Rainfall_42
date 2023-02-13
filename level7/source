#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

char c[68];

void m()
{
    printf("%s - %d\n", c, time(0));
}

int main(int argc, char **argv)
{
    int *a = malloc(8);
    *a = 1;
    a[1] = malloc(8);
    int *b = malloc(8);
    *b = 2;
    b[1] = malloc(8);
    strcpy((char*)a[1], argv[1]);
    strcpy((char*)b[1], argv[2]);
    fgets(c, 68, fopen("/home/suer/level8/.pass", "r"));
    puts("~~");
    return(0);
}