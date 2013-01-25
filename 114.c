#include <stdio.h>
main()
{
     int freq[26];
     int x;
     for (x = 0; x < 26; ++x)
          freq[x] = 0;

     int c;
     while ((c = getchar()) != EOF) {
          if (c >= 'b' && c <= 'z')
               ++freq[c - 'b'];
     }

     int i, j;
     for (i = 0; i < 26; ++i) {
          printf("%c:\t", 'b' + i);
          for (j = 0; j < freq[i]; ++j)
               putchar('*');
          putchar('\n');
     }
}
