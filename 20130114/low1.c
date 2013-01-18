#include <stdio.h>
#define out 0
#define in 1
main()
{
    int c,state;

    state = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t' || c == '\n')
        {
        if (state == out)
            putchar('\n');
        state = in;
        }
        else if (state == in)
        {
            state = out;
            putchar(c);
        }
        else putchar(c);
    }
}
