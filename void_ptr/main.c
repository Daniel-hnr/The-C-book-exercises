#include <stdio.h>



int main(void)
{
	int a = 3;
	void *p = &a;

	printf("%p\n",p);
	printf("%d\n",*(int *)p);
	return 0;
}
