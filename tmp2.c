#include <stdio.h>
#define arr_len 26
main()
{
    int c,i,j,wlen;
    int arr[arr_len];

    wlen = 0;
    for(i=0;i<ar_len;i++)
        arr[i] = 0;

    while((c = getchar()) != EOF){
        if('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z'){
            wlen++;
        }
    }
}
