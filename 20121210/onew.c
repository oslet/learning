#include <stdio.h>
main()
{
    int c;

    while ((c = getchar()) != EOF)
    {

        while (c == ' ' || c == '\t' || c == '\n')
            c = getchar();
        while (c != ' ' && c != '\t' && c != '\n')
        {
                    putchar(c);
                    c = getchar();
        }
printf("\n");
    }
}
