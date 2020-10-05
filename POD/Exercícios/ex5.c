#include <stdio.h>

int main(void)
{

    int X, Y, M;
    int Xi, Yi;
    while (scanf("%d %d %d", &X, &Y, &M) != EOF)
    {
        while (M--)
        {
            scanf("%d %d", &Xi, &Yi);

            if ((Xi * Yi) > X * Y)
            {
                printf("Nao\n");
            }
            else
            {
                printf("Sim\n");
            }
        }
    }

    return 0;
}
