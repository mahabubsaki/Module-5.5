#include <stdio.h>
// #include <stdbool.h>
int main()
{
    int from, to, i;
    // bool extend = false;
    scanf("%d%d", &from, &to);
    if (from <= to)
    {
        for (i = from; i <= to; i++)
        {
            printf("\n%d", i);
        }
    }
    else
    {
        for (i = from; i >= to; i++)
        {

            if (i > 24 && i % 24 > to)
            {
                break;
            }
            printf("\n%d", i % 24);
        }
    }
    return 0;
}