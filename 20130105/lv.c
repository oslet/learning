#include <stdio.h>
#include <string.h>

int main()
{
	char str[300];
	int tab[300] = {0};
	int max_count = 0;
	int max_len = 0;
	int len;
	int count;
	int i;

	while(scanf("%s", str) == 1)
	{
		len = strlen(str);
		++tab[len];		/* 相应长度加1 */
		max_len = max_len < len ? len : max_len;
		max_count = max_count < tab[len] ? tab[len] : max_count;
	}

	/* 输出统计图 */
	for(i=1;i<=max_len;i++)
	{
		printf("%3d |",i);
		count = tab[i];
		while(count-- > 0)
			printf("*");
		printf("\n");
	}
	printf("    +");
	for(i=0;i<=(max_count/5+1)*5;i+=5)
		printf("-----");
	printf("\n");

	printf("     ");
	for(i=0;i<=(max_count/5+1)*5;i+=5)
		printf("%5d",i);
	printf("\n");

	return 0;
}
