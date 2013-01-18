#include <stdio.h>


#define ARR_LEN 16  //the max length of one word  

int main(){

    int wlen = 0;       //Ã¥Â°Â±Ã¦Â¯Ã¤Â¸Ã¤Â¸ÂªÃ¨Â®Â¡Ã¦Â°Ã¥Â¨Ã¯Â¼Ã¨Â®Â¡Ã§Â®Ã¦Â¯Ã¤Â¸ÂªÃ¥Ã¨Â¯Ã§Ã©Â¿Ã¥ÂºÂ¦
    int c,i,j;          //cÃ¦Â¯Ã§Â¨Ã¦Â¥Ã¦Â¥Ã¦Â¶Ã¨Â¾Ã¥Â¥Ã§Ã¯Â¼iÃ£jÃ¥ÂªÃ¦Â¯Ã¥Â¾ÂªÃ§Â¯Ã¨Â®Â¡Ã¦Â°Ã§Â¨
    int arr[ARR_LEN];   //arrÃ¦Â°Ã§Â»Ã¦Â¯Ã§Â¨Ã¤ÂºÃ¨Â®Â°Ã¥Â½Ã¥Ã¨Â¯Ã©Â¿Ã¥ÂºÂ¦Ã§Ã¯Â¼Ã¥Â¶Ã¤Â¸Â­Ã¤Â¸Ã¦Â Ã¤Â»Â£Ã¨Â¡Â¨Ã©Â¿Ã¥ÂºÂ¦Ã¯Â¼Ã¥Â¼Ã¤Â»Â£Ã¨Â¡Â¨Ã¦Â°Ã©

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
