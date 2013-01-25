#include <stdio.h>

#define ARR_LEN 16  //the max length of one word  

int main(){

    int wlen = 0;       //就是一个计数器，计算每个单词的长度
    int c,i,j;          //c是用来接收输入的，i、j只是循环计数用
    int arr[ARR_LEN];   //arr数组是用于记录单词长度的，其中下标代表长度，值代表数量

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

    for(i=ARR_LEN;i>0;i--){
        if (i==10) printf("A");
        else if (i==11) printf("B");
        else if (i==12) printf("C");
        else if (i==13) printf("D");
        else if (i==14) printf("E");
        else if (i==15) printf("F");
        else if (i==16) ;
        else printf("%d",i);
        for (j=0;j<ARR_LEN;j++){
            if(arr[j] % ARR_LEN >= i){    
                printf(" * ");
            }else {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf(" ");
    for (i=1;i<=ARR_LEN;i++){
        if (i==10) printf(" A ");
        else if (i==11) printf(" B ");
        else if (i==12) printf(" C ");
        else if (i==13) printf(" D ");
        else if (i==14) printf(" E ");
        else if (i==15) printf(" F ");
        else if (i==16) break;
        else printf(" %d ",i);
    }
    printf("\n");
    return 0;
}
