//documentation section 
/* looping program */

//pre-processor section 
#include<stdio.h>

//global variable section

//main function section
int main(){
    int studentMark;
    int selection;

    do{
        printf("Enter Student Mark: ");
        scanf(" %d", &studentMark);

        if (studentMark >= 50)
        {
            printf("Student Grade:  %d \n", studentMark);
            printf("Status: PASS \n");
        }

        else
        {
            printf("Student Grade: %d \n", studentMark);
            printf("Status: FAIL \n");
        }

        printf("Do you want to continue? [1=Yes, 0=No]: ");
        scanf(" %d", &selection);

    }

    while(selection == 1);

    return 0;

}

//user-defined section