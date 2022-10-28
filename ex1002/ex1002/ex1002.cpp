#include <stdio.h>

void prompt(void);      /* function prototype */
void busy(void);

int main()
{
    busy();
    return(0);
}

/* Display prompt */

void prompt(void)
{
    printf("C:\\DOS> ");
}

void busy(void)
{
    int loop;
    char input[32];

    loop = 0;
    while (loop < 5)
    {
        prompt();
        fgets(input, 32, stdin);
        loop = loop + 1;
    }
}