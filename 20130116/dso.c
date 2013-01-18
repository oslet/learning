#include <stdio.h>
main()
{
    int c,state;

    state = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            if(state == 0)
            {
                state = 1;
                putchar(c);
            }
        }
        if( c != ' ')
        {
            state = 0;
            putchar(c);
        }       
    }
}
