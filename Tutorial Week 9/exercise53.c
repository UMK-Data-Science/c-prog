#include<stdio.h>
int main()
{
    int M1, M2, M3, M4, totalMark;

    printf("Enter Mark 1: ");
    scanf("%d", &M1); 

    printf("Enter Mark 2: ");
    scanf("%d", &M2); 

    printf("Enter Mark 3: ");
    scanf("%d", &M3);

    printf("Enter Mark 4: ");
    scanf("%d", &M4);

    totalMark = (M1 + M2 + M3 + M4) / 4;

    if (totalMark >= 50)
    {
        printf("Average Mark %d, grade PASS", totalMark);
    }

    else{
        printf("Average Mark %d, grade FAIL", totalMark);
    }

    return 0;
}