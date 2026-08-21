#include <stdio.h>


typedef enum {
	FLAG_A = (1 << 0),
	FLAG_B = (1 << 1)
} t_flag;


int f(int x,t_flag flags)
{
	if(flags & FLAG_A)
	{
		x += x;
		flags &= ~FLAG_A;
	}
	if(flags & FLAG_B)
	{
		x -= 1;
	}
	return x;
}



int main()
{
	printf("%d",f(10,FLAG_A | FLAG_B));
	return 0;
}
