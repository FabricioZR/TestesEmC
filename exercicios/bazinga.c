#include <stdio.h>
#include <string.h>

int main(void)
{
    int t,i;
    scanf("%d",&t);

    for (i = 1; i <= t; ++i)
    {
        char teste[20];
        char teste2[20];
        char a1[]="tesoura", a2[]="papel", a3[]="pedra", a4[]="lagarto", a5[]="Spock";

        scanf("%s %s",teste,teste2);

        if (0==strcmp(teste,teste2)){
            printf("Caso #%d: De novo!\n",i);
        }

        else if (0==strcmp(teste,a1))
        {
            if((0==strcmp(teste2,a2))  (0==strcmp(teste2,a4)))
                printf("Caso #%d: Bazinga!\n",i);
            else if((0==strcmp(teste2,a3))  (0==strcmp(teste2,a5)))
                printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if (0==strcmp(teste,a2))
        {
            if ((0==strcmp(teste2,a3))  (0==strcmp(teste2,a5)))
                printf("Caso #%d: Bazinga!\n",i);
            else if ((0==strcmp(teste2,a1)) (0==strcmp(teste2,a4)))
                printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if (0==strcmp(teste,a3))
        {
            if((0==strcmp(teste2,a4))(0==strcmp(teste2,a1)))
                printf("Caso #%d: Bazinga!\n",i);
            else if ((0==strcmp(teste2,a2)) (0==strcmp(teste2,a5)))
                printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if (0==strcmp(teste,a4))
        {
            if((0==strcmp(teste2,a5))(0==strcmp(teste2,a2)))
                printf("Caso #%d: Bazinga!\n",i);
            else if ((0==strcmp(teste2,a3)) (0==strcmp(teste2,a1)))
                printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if (0==strcmp(teste,a5))
        {
            if((0==strcmp(teste2,a1))(0==strcmp(teste2,a3)))
                printf("Caso #%d: Bazinga!\n",i);
            else if ((0==strcmp(teste2,a4)) (0==strcmp(teste2,a2)))
                printf("Caso #%d: Raj trapaceou!\n",i);

        }
    }
    return 0;
}