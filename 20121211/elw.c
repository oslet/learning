#include <stdio.h>
main()
{
    int c;

    while((c = getchar()) != '0')
    {
        while(c == ' ' || c == '\t\' || c == '\n')
          printf("\n");

    }
}
