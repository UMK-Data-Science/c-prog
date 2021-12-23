//documentation section 
/* looping and selection */

//pre-processor section 
#include<stdio.h>

//global variable section 

//main function section
int main()
{
    int studentMark; 
    int counterStudent;

    for (counterStudent = 1; counterStudent<=30; counterStudent++)
    {
        
        printf("Enter Student Mark: ");
        scanf(" %d", &studentMark);

        if (studentMark >= 50)
        {
            printf("Student %d Grade: %d \n", counterStudent, studentMark);
            printf("Status: PASS \n");
        }

        else
        {
            printf("Student %d Grade: %d \n", counterStudent, studentMark);
            printf("Status: FAIL \n");
        }
    }
   
    return 0;
}

//user-defined section