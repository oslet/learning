#include <stdio.h>
#define arr_len 20
main()
{
    int c,i,j,wlen;
    int arr[arr_len];

    wlen = 0;
    for(i=0;i<arr_len;i++)
        arr[i] = 0;

    while((c = getchar()) != EOF){
        if('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z'){
            wlen++;
        }else {
            arr[wlen-1]++;
            wlen = 0;
        }
    }
    for(i=arr_len;i>0;i--){
        if(arr[i] != 0){
            printf("%d ",i+1);
            for(j=0;j<=arr_len;j++){
                printf("*");
                if(j%5==0){
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}
