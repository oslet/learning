#include<stdio.h>
#define out 0
#define in 1
void main()
{
    int c,state;

    state = out;
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t' || c == '\n')
        {
            if(state == in)
                putchar('\n');
                    state = out;
        }
        else if (state == out)
        {
            state = in;
            putchar(c);
        }
        else putchar(c);
    }
}
