#include <stdio.h>

#define OUT 0
#define IN 1

int main()
{
    int c , nw , nc , state;
    state = OUT;
    nw = nc =0;
    int lentghs[10];
    printf("limit : 10 word max and 10 char max lentghs\n");
    for(int n = 0;n < 10;n++)
        lentghs[n] = 0;
    while((c = getchar()) != EOF)
    {
        
        ++nc;
        if(c == ' ' || c == '\n' || c == '\t')
        {
            nw++;
            lentghs[nw-1] = nc-1;
            state = OUT;
            nc = 0;
        }
        else if(state == OUT)
        {
            state = IN;
        }

    }
    for(int upper = 10; upper > 0;upper--)
    {
        for(int n = 0;n<10;n++)
        {
//             printf("%d : lentgh : %d , upper : %d\n",n,lentghs[n],upper);
            if((lentghs[n] - upper) >=0)
                putchar('+');
            else
                putchar(' ');
        }
        printf("\n");
    }
    for(int n = 0;n<10;n++)
    {
        printf("%d",n);
    }

    return 0;
}
