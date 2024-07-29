#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {

        int tk;
        scanf("%d", &tk);

        if (tk >= 10000)
        {
            printf("Gucchi Bag\n");
            if (tk > 20000)
                printf("Gucchi Belt");
        }
        else
        {
            if (tk >= 5000)
                printf("Levis Bag");

            else
                printf("Something");
        }
    }
    return 0;
}