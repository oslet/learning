#include <stdio.h>
main()
{
    int c,count;

    count=0;
    while((c = getchar()) != '0')
        if(c != ' ' || c != '\t' || c != '\n')
            ++count;
    printf("%d\n",count);   
}
