
int n()
{
    return(systen("/bin/cat /home/user/level7/.pass"));
}

void m() 
{
    puts("Nope");
    return ;
}

int main(int argc, char **argv)
{
    char *a = malloc(40);
    char *b = malloc(4);
    *b = "0x8048468";
    strcpy(a, argv[1]);
    
    return (0);
}