#include<stdio.h>
int main(){

    float weight, height, convertHeight, bmi;

    printf("Enter Weight: ");
    scanf("%f", &weight); 

    printf("Enter Height: ");
    scanf("%f", &height); 

    convertHeight = height * 0.01; //change centimeter to meter
    bmi = (weight) / ((convertHeight * convertHeight)); 

    if (bmi < 18.5)
    {
        printf("Underweight BMI");
    }
    
    if (bmi >= 18.5 && bmi < 25)
    {
        printf("Normal BMI"); 
    }

    else if (bmi >= 25 && bmi < 30)
    {
        printf("Overweight BMI");
    }

    else if (bmi >= 30 && bmi < 35)
    {
        printf("Obese Class 1 BMI");
    }

    else if (bmi >= 35 && bmi < 40)
    {
        printf("Obese Class 2 BMI");
    }

    else if (bmi >= 40)
    {
        printf("Obese Class 3 BMI");
    }

    return 0; 

}