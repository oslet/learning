 #include <stdio.h>
 #define IN 1     /* 在单词内部 */
 #define OUT 0    /* 在单词外部 */
 #define MAXLEN  15 /* 单词的最大长度 */
 #define MAXHIST 15 /* 直方图的最大长度 */
 #define MAXWORD 100 /* 限制输入单词的上限 */
 
 int wl[MAXWORD];    /* 用于存放单词长度的数组 */
 
 /* 打印垂直方向的直方图 */
 void main()
 {
     char c;
     int i, j;
     int len = 0;    /* 当前单词的长度 */
     int wc = 0; /* 统计单词的个数 */
     int state = OUT;  /* 状态初始化为在单词外部 */
     int maxvalue;     /* 单词中最大长度 */
     for (int k=0; k<MAXWORD; k++)
         wl[MAXWORD] = 0;            /* 数组进行初始化 */
     while ((c=getchar()) != EOF) {
         if (c == ' ' || c == '\t' || c == '\n') {
             if (state == IN) {
                 if (len > MAXLEN)
                     len = MAXLEN;
                 wl[++wc] = len;
             }
             len = 0;
             state = OUT;
         } else if (state == OUT) {
             state = IN;
             len++;
         } else
             len++;
     }
     if (wc < 1) {
         printf("no words!\n");
         return;
     }else if (wc > MAXWORD)
         wc = MAXWORD;
     maxvalue = 0;
     for (i=1; i<=wc; i++) {
         if (wl[i] > maxvalue)
             maxvalue = wl[i];
     }
     /* 实现垂直直方图 */
     for (i=MAXHIST; i>0; --i) {
         for (j=1; j<=wc; j++)
             if (wl[j] % MAXHIST >= i) {
                 printf(" * ");
             } else
                 printf("   ");
         putchar('\n');
     }
     for (i=1; i<=wc; i++)
         printf(" %d ", wl[i]);
     putchar('\n');
 }
