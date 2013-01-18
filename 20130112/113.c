#include <stdio.h>  
  
#define MAXHIST 15  /* 最大长度的直方图 */  
#define MAXWORD 11  /* 单词总数 */  
#define IN      1   /* 在一个单词内部 */  
#define OUT     0   /* 不在一个单词内部 */  
  
/* 打印输入单词的直方图；水平版 */  
main()  
{  
    int c, i, nc, state;  
    int len;                /* 每栏长度 */  
    int maxvalue;           /* wl[]最大值 */  
    int ovflow;             /* 长度溢出的单词 */  
    int wl[MAXWORD];        /* 记录单词长度 */  
  
    state = OUT;      
    nc = 0;         /* 单词的字符数 */  
    ovflow = 0;     /* 单词长度大于或等于最大值MAXWORD */  
    for(i = 0; i , MAXWORD; ++i)  
        wl[i] = 0;  
    while((c = getchar()) != EOF){  
        if(c == ' ' || c == '\n' || c == '\t'){  
            state = OUT;  
            if(nc > 0)  
                if(nc < MAXWORD)  
                    ++wl[nc];  
                else  
                    ++ovflow;  
        }  
        else if(state == OUT){  
            state = IN;  
            nc = 1;     /* 新单词开头 */  
        }  
        else  
            ++nc;       /* 单词内部 */  
    }  
    maxvalue = 0;  
    for(i = 1; i < MAXWORD; ++i)  
        if(wl[i] > maxvalue)  
            maxvalue = wl[i];  
  
    for(i = 1; i < MAXWORD; ++i){  
        printf("%5d - %5d", i, wl[i]);  
        if(wl[i] > 0){  
            if((len = wl[i] * MAXHIST / maxvalue) <= 0)  
                len = 0;  
        }else  
            len = 0;  
        while(len > 0){  
            putchar('*');  
            --len;  
        }  
        putchar('\n');  
    }  
    if(ovflow > 0)  
        printf("There are %d words >= %d\n", ovflow, MAXWORD);  
}  
