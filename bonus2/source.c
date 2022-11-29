#include <string.h>
#include <stdio.h>

int language = 0;

int greetuser(char *ar)
{
    char str[20];
    int n;

    if (language == 1) {
        strcpy(str,"Hyvää päivää ");
    }
    else if (language == 2) {
        strcpy(str, "Goedemiddag! ");
    }
    else if (language == 0) {
        strcpy(str, "Hello ");
    }
    strcat(str, ar);
    n = puts(str);
    return (n);
}

int main(int argc ,char** argv)
{
    int n;
    char buffer[10];
    char buffer1[36];
    char *str2;

    if (argc == 3)
    {
        str2 = buffer;
        for (n = 19; n != 0; n--) {
            *str2 = 0;
            str2++;
        }
        strncpy(buffer, argv[1], 40);
        strncpy(buffer1, argv[2], 32);
        str2 = getenv("LANG");
        if (str2 != NULL) {
            n = memcmp(str2,  "fi", 2);
            if (n == 0)
                language = 1;
            else {
                n = memcmp(str2,  "nl", 2);
                if (n == 0)
                    language = 2;
            }
        }
        n = greetuser(argv[1]);
    }
    else 
        n = 1;
    return (n);
}

// YOU AIN'T EVER ACTIVATED A BANKAI IN HUECO MUNDO AND REAPED A MANS SOUL 