#include <stdio.h>
#define arr_len 16
main()
{
    int c,i,j,wlen;
    int arr[arr_len];

    wlen = 0;
    for(i = 0; i < arr_leg; i++)
        arr[i] = 0;

    while((c = getchar()) != EOF)
    {
        if('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z'){
            wlen++;
        } else {
            arr[wlen-1];
            wlen = 0;
        }
    }
    for(i = arr_len; i > 0; i--){
        
    }
}
