#include<stdio.h>
int main()
{
    int num1 = 100;
    int num2 = 20;

    int max = (num1 > num2) ? num1 : num2;

    printf("Maximum is %d.", max);

    return 0;
}
