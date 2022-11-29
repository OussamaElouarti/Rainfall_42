#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void p(char* str, char* str1)
{
    char buffer[4104];
    char *end;

    puts(str1);
    read(0, buffer, 4096);
    end = strchr(buffer, '\n');
    *end = '\0';
    strncpy(str, buffer, 20);
    return ;
}

void pp(char *str)
{
    char buffer[20];
    char buffer1[20];

    p(buffer, '-');
    p(buffer1, '-');
    strcpy(str, buffer);
    str[strlen(str)] = ' ';
    strcat(str, buffer1);
    return ;
}

int     mian(void)
{
    char str[54];
    pp(str);
    puts(str);
    return (0);
}