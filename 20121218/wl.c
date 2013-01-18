#include <stdio.h>
#define maxlen 15
int main()
{
    int c,i=0,j=0,max=0;
    int len[12]= {0};

    while ((c = getchar()) != EOF)
        i++;
    if(c == ' ' || c == '\t' || c == '\n')
    {
        if(i<11)
            len[11]++;
        else len[i-1]++;
        i=0;
    }
}
printf("********水平直方图********\n\n");
for(i=0;i<11;i++)
 {
     j = len[i];
     printf("长度=%2d | ",i);
     while(j-->0)
         printf("*");
     printf("\n");
 }
printf("长度>10 | ");
for(i=0;i<len[11];i++)
    printf("*");
printf("\n +-");
for(i=0;i<maxlen;i++)
    printf("---");
printf("\n ");
for(i=0;i<maxlen;i++)
    printf("%2d",i);
printf("\n\n\n");
}
