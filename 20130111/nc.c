#include <stdio.h>
main()
{
    int c,nl,nc,nw,state;

    nl = nc = nw = state = 0;
    while((c = getchar()) != EOF)
    {
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\t' || c == '\n')
            state = 0;
        else if(state == 0)
        {
            state = 1;
        ++nw;
        }
    }
    printf("%d,%d,%d\n",nl,nc,nw);
        
}
