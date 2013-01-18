#include<stdio.h>
#include <stdlib.h>
#define MAXNUM 9 /*允许出现次数最大值*/
void main()
{
    int i,j,k,c,max=0;
    int num[50];
    for(i=0;i<50;i++)
    {
        num[i]=0;
    }
    while((c=getchar()) != EOF)
    {
        i=0;
        while((c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
            i++;
            c=getchar();
        }
        if(i > max)
        {
            max=i;
        }
        ++num[i];
    }
    for(j=1;j<=max;j++)
    {
        if(num[j]!=0)
        {
            printf("length %3d: ",j);
    for(k=1;k<=MAXNUM;k++) /*打印刻度值*/
    {
        printf("%2d",k);
    }
    printf("n");
    system("pause");
}
