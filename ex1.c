#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Table of %d:\n", a);
    printf("%d X 1 = %d\n", a, a*1);
    printf("%d X 2 = %d\n", a, a*2);
    printf("%d X 3 = %d\n", a, a*3);
    printf("%d X 4 = %d\n", a, a*4);
    printf("%d X 5 = %d\n", a, a*5);
    printf("%d X 6 = %d\n", a, a*6);
    printf("%d X 7 = %d\n", a, a*7);
    printf("%d X 8 = %d\n", a, a*8);
    printf("%d X 9 = %d\n", a, a*9);
    printf("%d X 10 = %d\n",a, a*10);
    return 0;
}
