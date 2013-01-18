#include <stdio.h>
main()
{
    int c,nc,word;

    while((c = getchar()) != EOF)
    {   ++nc;
        if(c != ' ' || c != '\t' || c != '\n')
            ++word;
    }
        printf("%d\n,",word);
}
