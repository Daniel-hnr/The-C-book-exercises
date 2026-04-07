#include <stdio.h>


float convert(float temp_c)
{
    float temp_f = (temp_c * 9/5)+32;
    return temp_f;
}


int main(void)
{
    float temp;
    scanf("%f",&temp);
    printf("%f ----> %f",temp,convert(temp));
    return 0;
}

