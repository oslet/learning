#include <stdio.h>
#include <math.h>

char ans[100][200];
void Dfs(int n,int x,int y)
{
    if(n==1)
    {
        ans[x][y]=47;
        ans[x+1][y-1]=47;
        ans[x][y+1]=92;
        ans[x+1][y+2]=92;
        ans[x+1][y]=95;
        ans[x+1][y+1]=95;
    }
    else
    {
        Dfs(n-1,x,y);
        Dfs(n-1,x+pow(2,n-1),y-pow(2,n-1));
        Dfs(n-1,x+pow(2,n-1),y+pow(2,n-1));
    }
}
    void main()
    {
        int N;
        scanf("%d",&N);
        for(int i=0;i<=pow(2,N)-1;i++)
        for(int j=0;j<=pow(2,N+1);j++)
            ans[i][j]=' ';
        Dfs(N,0,pow(2,N)-1);
        for(int k=0;k<=pow(2,N)-1;k++)
           printf("%s\n",ans[k]);
    }

