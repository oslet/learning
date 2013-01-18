#include <stdio.h>

#define ARR_LEN 20  //the max length of one word  

int main(){

    int wlen = 0;
    int c,i,j;
    int arr[ARR_LEN];

    for(i=0;i<ARR_LEN;i++){
        arr[i]=0;
    }


    while((c=getchar()) != EOF){
          if (('a'<=c && c<='z') || ('A'<=c && c<='Z')){
            wlen++;
        }else {
            arr[wlen-1]++;
            wlen = 0;
        }
    }

    for(i=ARR_LEN;i>=0;i--){
        if(arr[i]!=0){
            printf("%d ",i+1);
            for(j=1;j<=arr[i];j++){
                printf("*");
                if(j%5==0){
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
