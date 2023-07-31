#include <stdio.h>

int _strlen(char *s);
int main(int argc, char *argv[])
{
        (void)argc;
	printf("%d\n", _strlen(*argv));
        return (0);
}
