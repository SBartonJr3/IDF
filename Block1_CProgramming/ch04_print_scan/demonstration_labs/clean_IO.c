// Easy and clean method to clear input buffer... to be ran after an input (scanf, getc, etc)

#include <stdio.h>

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}