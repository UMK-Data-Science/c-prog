#include<stdio.h>
int main()
{
    int a = 10, b = 50;
    char ch1 = 'A';
    float x = 9.5;
    
    int result;

    result = ((a == 2) && (b == 50));
    printf("((a == 2) && (b == 50)) is %d \n", result);

    result = ((ch1 == 'A') || (x == 9.5));
    printf("((ch1 == 'A') || (x == 9.5)) is %d \n", result);

    result = (ch1 == 'A');
    printf("(ch1 == 'A') is %d", result);




}