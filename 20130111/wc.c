#include <stdio.h>
#define out 0
#define in 1
main()
{
    int c,nl,nw,nc,state;

    nl = nw = nc = state = 0;
        while((c = getchar()) != EOF)
        {
            ++nc;
            if(c == '\n')
                ++nl;
            if(c == ' ' || c == '\t' || c == '\n')
                state = out;
            else if(state == out){
                state =  in;
            ++nw;
            }
        }
    printf("words = %d, lines = %d, characters = %d\n",nw,nl,nc);
}
