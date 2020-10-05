#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,c;
    char tes[]="tesoura", pap[]="papel", ped[]="pedra", lag[]="lagarto", dog[]="Spock";
    char a1[10],a2[10];
    scanf("%d",&a);
    for(b=1; b<=a; b++)
    {
        scanf("%s%s", a1,a2);
        if(0==strcmp(a1,a2))
            printf("Caso #%d: De novo!\n", b);
        else if(0==strcmp(a1,tes))
        {
            if((0==strcmp(a2,pap)) || (0==strcmp(a2,lag)))
                printf("Caso #%d: Bazinga!\n", b);
            else if((0==strcmp(a2,ped)) || (0==strcmp(a2,dog)))
                printf("Caso #%d: Raj trapaceou!\n", b);
        }
        else if(0==strcmp(a1,pap))
        {
            if((0==strcmp(a2,ped)) || (0==strcmp(a2,dog)))
                printf("Caso #%d: Bazinga!\n", b);
            else if((0==strcmp(a2,tes)) || (0==strcmp(a2,lag)))
                printf("Caso #%d: Raj trapaceou!\n", b);
        }
        else if(0==strcmp(a1,ped))
        {
            if((0==strcmp(a2,tes)) || (0==strcmp(a2,lag)))
                printf("Caso #%d: Bazinga!\n", b);
            else if((0==strcmp(a2,pap)) || (0==strcmp(a2,dog)))
                printf("Caso #%d: Raj trapaceou!\n", b);
        }
        else if(0==strcmp(a1,lag))
        {
            if((0==strcmp(a2,pap)) || (0==strcmp(a2,dog)))
                printf("Caso #%d: Bazinga!\n", b);
            else if((0==strcmp(a2,ped)) || (0==strcmp(a2,tes)))
                printf("Caso #%d: Raj trapaceou!\n", b);
        }
        else if(0==strcmp(a1,dog))
        {
            if((0==strcmp(a2,tes)) || (0==strcmp(a2,ped)))
                printf("Caso #%d: Bazinga!\n", b);
            else if((0==strcmp(a2,pap)) || (0==strcmp(a2,lag)))
                printf("Caso #%d: Raj trapaceou!\n", b);
        }
    }
    return 0;
}
