//documentation section 
/* looping and selection exercise tutorial*/

//pre-processor section
#include<stdio.h>

//global variable section 

//main function section 
int main()
{
    float weight, height, convertHeight, bmi;
    int selection;

    do{
        printf("Enter Weight: ");
        scanf(" %f", &weight); 

        printf("Enter Height: ");
        scanf(" %f", &height); 

        convertHeight = height * 0.01; //change centimeter to meter
        bmi = (weight) / ((convertHeight * convertHeight)); 

        if (bmi < 18.5)
        {
            break;
        }
        
        if (bmi >= 18.5 && bmi < 25)
        {
            printf("Normal BMI \n"); 
        }

        else if (bmi >= 25 && bmi < 30)
        {
            printf("Overweight BMI \n");
        }

        else if (bmi >= 30 && bmi < 35)
        {
            printf("Obese Class 1 BMI \n");
        }

        else if (bmi >= 35 && bmi < 40)
        {
            printf("Obese Class 2 BMI \n");
        }

        else if (bmi >= 40)
        {
            printf("Obese Class 3 BMI \n");
        }

        printf("Do you want to continue? {1=Yes, 0=No]: ");
        scanf(" %d", &selection);

    }

    while(selection == 1);
    
    return 0; 

}

//user-defined section 