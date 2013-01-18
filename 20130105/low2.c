#include <stdio.h>
main()
{
    int c,state;

    state = '0';
    while((c = getchar()) != EOF)
    {
        if(c != ' ' || c != '\t' || c != '\n')
        {
          if(state == '1')
            putchar('\n');
            state = 0;
        }
        else if(state == '0')
        {
                state = '1';
            putchar(c);
        }
        else putchar(c);
     }        
}
