#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define lld long long int

int main()
{
    int t;
    scanf("%d", &t);
    //getchar();

    while(t--)
    {
        char s[10001];
        int cnt_c = 0, cnt_s = 0, cnt_d = 0;
        //fgets(s, sizeof(s), stdin);
        scanf("%s", &s);

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                cnt_s++;

            else if (s[i] >= 'A' && s[i] <= 'Z')
                cnt_c++;

            else if (s[i] >= '0' && s[i] <= '9')
                cnt_d++;
        }
        printf("%d %d %d\n", cnt_c, cnt_s, cnt_d);
    }
    return 0;
}