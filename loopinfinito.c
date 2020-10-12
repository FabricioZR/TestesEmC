#include <stdio.h>
#include <time.h>
int main()
{
    int ever = 2;

    for (int i = 0; i < 10 && ever > 1; i++)
    {
        printf("%d\n", i);

        if (i % 7 == 0)
        {
            ever = -3;
        }
    }
    return 0;
}