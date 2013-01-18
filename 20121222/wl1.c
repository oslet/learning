#include "stdio.h"
#include "stdlib.h"
#define MAXLENGTH 80
#define OUT (0)                                                            /*å­�ç¬¦å�¨å��è¯�å¤�*/
#define IN (1)                                                               /*å­�ç¬¦å�¨å��è¯�å��*/
/*ç¼�å��ä¸�ä¸ªç¨�åº�ï¼�æ��å�°è¾�å�ºä¸­å��è¯�é�¿åº¦ç��æ°´å¹³ç�´æ�¹å�¾ã��*/
main()
{
int ch;
int i,j;                                                                        /*è®¡æ�°å�¨*/
int nl=0;                                                                   /*å��è¯�é�¿åº¦è®¡æ�°å�¨*/
int nw=0;                                                                 /*å��è¯�æ�°é��è®¡æ�°å�¨*/
int state=OUT;                                                         /*å�¤æ�­ä¸�ä¸ªå­�ç¬¦å¤�äº�å��è¯�å��è¿�æ�¯å��è¯�å¤�*/
int overflow=0;                                                        /*é�¿åº¦å¤§äº�æ��ç­�äº�12ç��å��è¯�æ�°*/
int wl[MAXLENGTH];                                                /*å­�å�¨æ��å��è¯�é�¿åº¦æ�¥æ��ç��å��è¯�ä¸ªæ�°*/
for(i=1;i<=MAXLENGTH-1;i++)                                /*å��å§�å��å��é�¿åº¦å��è¯�æ�°é��ä¸º0*/
   wl[i]=0;
printf("Please enter some sentences:\n");
while((ch=getchar())!=EOF)
{
   if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
   {
    if(state==OUT)
    {
     nl++;
     nw++;
     state=IN;
    }
    else nl++;
   }
   else
   {
    if(state==IN)
    {
     if(nl>=MAXLENGTH)
      overflow++;
     else wl[nl]++;
     state=OUT;
     nl=0;
    }
    else continue;
   }
}
printf("\nOutput the horizontal histogram:\n");
printf("Total words: %d\n\n",nw);                              /*è¾�å�ºæ�»å��è¯�æ�°*/
for(i=1;i<=MAXLENGTH-1;i++)                                 /*è¾�å�ºæ°´å¹³ç�´æ�¹å�¾*/
{
   printf("wl=%d:\t",i);
   for(j=0;j<wl[i];j++)
    putchar('*');
   putchar('\n');
}
printf("\nNote: %d words have 10 or more characters.\n\n",overflow);
return 0;
}
