#include <stdio.h>

int main()
{
    int c,nb;
    while((c = getchar())!=EOF)
    {
        if(c == ' '){
            nb++;
        }
        if(c == ' ' &&  nb < 2)
        {
            putchar(c);
        }
        else if(c != ' ' )
        {
            putchar(c);
            nb = 0;
        }
    }    
  
    return 0;
}
