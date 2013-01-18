#include <stdio.h>  
#define MAXHIST 15  // max length of histogram  
#define MAXWORD 11  // max length of a word  
#define IN 1    // inside a word  
#define OUT 0   // outside a word  
int main()  
{  
    int i, c, state, nc;  
    int len;        // length of each bar  
    int maxvalue;   // maximum value for wl[]  
    int ovflow;     // number of overflow words  
    int wl[MAXWORD];    // word length counters  
    state = OUT;  
    nc = 0;     // number of chars in a word  
    ovflow = 0; // number of words >= MAXWORD  
    for (i = 0; i < MAXWORD; i++)  
    {  
        wl[i] = 0;  
    }  
    while ((c = getchar()) != EOF)  
    {  
        if (c == ' ' || c == '/t' || c == '/n')  
        {  
            state = OUT;    // å�¨å��è¯�å¤�ï¼�æ �å¿�ç��ä¸�ä¸ªå��è¯�ç��ç»�æ��  
            if (nc > 0)  
            {  
                if (nc < MAXWORD)  
                {  
                    ++wl[nc];  
                }  
                else  
                {  
                    ++ovflow;  
                }  
                nc = 0;     // å��å¤�è®¡æ�°ä¸�ä¸�ä¸ªå��è¯�ç��å­�ç¬¦æ�°  
            }  
        }  
        else if (state == OUT)  // å�ºç�°æ��ä¸ªå��è¯�ç��é¦�å­�ç¬¦  
        {  
            state = IN;  
            nc = 1;     // beginning of a new word  
        }  
        else    // å��è¯�é�¤è¿�é¦�å­�ç¬¦ç��å�¶ä»�å­�ç¬¦  
        {  
            ++nc;   // inside a word  
        }  
    }  
      
    // find the maximum value in wl[MAXWORD]  
    maxvalue = 0;  
    for (i = 1; i < MAXWORD; i++)    // wl[0]æ�ªä½¿ç�¨ï¼�å��è¯�ç��é�¿åº¦>0ï¼�  
    {  
        if (wl[i] > maxvalue)  
        {  
            maxvalue = wl[i];  
        }  
    }  
    // è®¡ç®�å¯¹åº�ncç��ç�´æ�¹å�¾é�¿åº¦ï¼�å¹¶è¾�å�ºç�´æ�¹å�¾  
    for (i = 1; i < MAXWORD; i++)  
    {  
        printf("%5d - %5d : ", i, wl[i]);  
        if (wl[i] > 0)  
        {  
            // å�©ç�¨ä¸�é�¢ç��å�¬å¼�è®¡ç®�é�¿åº¦ï¼�æ��å°�é�¿åº¦1  
            if ((len = wl[i] * MAXHIST / maxvalue) <= 0)  
            {  
                len = 1;  
            }  
        }  
        else  
        {  
            len = 0;  
        }  
        // è¾�å�ºç�´æ�¹å�¾  
        while (len > 0)  
        {  
            putchar('*');  
            --len;  
        }  
        putchar('/n');  
    }  
    // æ�¯å�¦æ��é�¿åº¦è¶�å�ºæ��å¤§å��è¯�é�¿åº¦ç��å��è¯�  
    if (ovflow > 0)  
    {  
        printf("There are %d words >= %d/n", ovflow, MAXWORD);  
    }  
    return 0;  
}  
