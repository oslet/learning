#include <stdio.h>
#define arr_len 20
main()
{
    int c,i,j,wlen;
    int arr[arr_len];

    wlen = 0;
    for(i=0;i<arr_len;i++)
        arr[i] = 0;
    while((c = getchar()) != EOF)
    {
        if(('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
        {
            wlen++;
        }else{
            arr[wlen-1]++;
            wlen = 0;
        }
    }
    for(i=arr_len;i>0;i--){
        if(i==10) printf("A");
        else if(i==11) printf("B");
        else if(i==12) printf("C");
        else if(i==13) printf("D");
        else if(i==14) printf("E");
        else if(i==15) printf("F");
        else if(i==16) ;
        else printf("%d",i);
        for(j=0;j<arr_len;j++){
            if(arr[j] % arr_len >= i){
                printf(" * ");
            }else {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf(" ");
    for(i=1;i<=arr_len;i++)    {
        if(i==10) printf(" A ");
        else if(i==11) printf(" B ");
        else if(i==12) printf(" C ");
        else if(i==13) printf(" D ");
        else if(i==14) printf(" E ");
        else if(i==15) printf(" F ");
        else if(i==16) break;
        else printf(" %d ",i);
    }
    printf("\n");
}
