#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        write(1, "Usage: ./text_wave \"Your text here\"\n", 37);
        return (1);
    }

    char *str = av[1];
    int len = strlen(str);
    double t = 0.0;

    while (1)
    {

        printf("\x1b[2J\x1b[H");

        for (int i = 0; i < len; i++)
        {
            int offset = (int)(sin(t + i * 0.5) * 3.0);
            for (int j = 0; j < offset + 5; j++) 
                printf(" ");
            printf("%c\n", str[i]);
        }

        fflush(stdout);
        usleep(100000); // 0.1s delay
        t += 0.3;
    }
    return (0);
}