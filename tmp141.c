#include <stdio.h>
main()
{
    int c,i,j;
    int nc[26];

    
    for(i=0;i<26;i++)
        nc[i] = 0;

    while((c = getchar()) != EOF){
        if('a' <= c && c <= 'z'){
            nc[c - 'a']++;
        }
    }
    for(i=0;i<26;i++){
        printf("%c:\t",'a'+ i);
        for(j=0;j<nc[i];j++){
            printf("*");
        }
        printf("\n");
    }
    
}
