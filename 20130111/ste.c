#include <stdio.h>
main()
{
    int c,space,table,enter;

    space = table = enter = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ')
            ++space;
        if(c == '\t')
            ++table;
        if(c == '\n')
            ++enter;
    }
    printf("space = %d, table = %d, enter = %d\n",space,table,enter);
}
