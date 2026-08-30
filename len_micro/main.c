#include <stdio.h>

#define ARRAY_LEN(a) (sizeof a/ sizeof a[0])
int main()
{
        int list[] = {8,21,31,31,232,321,3,123123,1,3,123,12,31,23,1};
        printf("len array: %d",ARRAY_LEN(list));
        return 0;
}
