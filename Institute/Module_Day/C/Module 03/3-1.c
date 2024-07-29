#include<stdio.h>
void kind01()
{
    for(int i=0; i<5; i++)
    {
        printf("I am Ashraf\n");
    }
    printf("\n\n");
}
void kind02()
{
    for (int i=0; i<5; i++)
    {
        printf("%d\n", i);
    }
    printf("\n\n");
}
/*
void kind03()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("%d\n", i);
    }
}
*/
void kind04()
{
    for(int i=10; i>0; i--)
    {
        printf("%d\n", i);
    }
    printf("\n\n");
}
void kind05()
{
    int sum=0;
    for (int i=1; i<6; i++)
    {
        sum+=i;
    }
    printf("sum=%d\n\n", sum);
}
void kind06()
{
    for (int i=1; i<=10; i+=2)
    {
        printf("%d\n", i);
    }
    printf("\n\n");
}
void kind07()
{
    for(int i=0; i<=10; i++)
    {
        if(i%2==0)
            printf("EVEN=%d\n", i);
        else
        printf("ODD=%d\n",i);
    }
    printf("\n\n");
}

int main()
{
    kind01();
    kind02();
    //kind03();
    kind04();
    kind05();
    kind06();
    kind07();

    return 0;
}
