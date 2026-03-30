#include <stdio.h>

int main()
{
    long nl=1,nb=0,nt=0;
    int c;
    while((c = getchar())!= EOF)
    {
        if(c == '\n')
            nl++;
        else if(c == ' ')
            nb++;
        else if(c == '\t')
            nt++;
    }
    printf("\ntabs : %ld,lines : %ld,blanks : %ld \n",nt,nl,nb);
    return 0;
}
