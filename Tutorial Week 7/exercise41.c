//exercise 4.1

#include<stdio.h>
int main()
{
    int a = 10, b = 5, c = 2;

    printf("%d == %d is %d \n", a, a, a==a);
    printf("%d != %d is %d \n", b, a, b!=a);
    printf("%d < %d is %d \n", a, c, a<c); 
    printf("%d != %d is %d \n", c, c, c!=c);
    printf("%d >= %d is %d \n", a, c, a>=c);
    printf("%d <= %d is %d \n", c, a, c<=a);
}