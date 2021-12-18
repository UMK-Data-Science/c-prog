#include<stdio.h>
int main()
{
    int value;

    printf("Enter a Number: ");
    scanf("%d", &value);

    if (value < 0)
    {
        printf("This is a negative number");
    }

    else{
        printf("This is a positive number");
    }

    return 0;
}