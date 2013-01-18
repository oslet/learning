#include <stdio.h>
main()
{
    int c,table;

    table = 0;
    while((c = getchar()) != EOF)
    {
        if(c == '\t')
        {
            if(table == 0)
            {
                table = 1;
                putchar(c);
            }
        }
        if(c != '\t')
        {
            table = 0;
            putchar(c);
        }
     }
}
