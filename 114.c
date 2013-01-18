#include<stdio.h> 
#include<stdlib.h> 
#define Max 100 
int fun(char str[],char a[],int c[]) 
{ 
int i,j,k=0,len=0; 
for(;str[len]!='/0';len++); 
a[0]=str[0];c[0]=1;k++; 
for(i=1;i<len;i++) 
  c=0; 
for(i=1;i<len;i++) 
{ j=0; 
  while(j<k&&a[j]!=str) j++; 
  if(j==k) 
{ 
   a[k]=str; 
   c[k]++; 
   k++; 
} 
else 
  c[j]++; 
} 
return k; 
} 
main() 
{ 
char str[Max],a[Max]; 
int c[Max],k,i; 
printf("输入字符串："); 
gets(str); 
k=fun(str,a,c); 
printf("统计结果如下：/n"); 
printf("字符"); 
for(i=0;i<k;i++) 
printf("%3c",a); 
printf("/n"); 
printf("频度"); 
for(i=0;i<k;i++) 
printf("%3d",c); 
printf("/n"); 
}
