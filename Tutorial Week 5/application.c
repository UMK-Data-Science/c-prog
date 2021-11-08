//documentation section 
/*Nurulaqilla Khamis, 8/11/2021, 
description: This is example of sample code c-programming appplication
this code is used to calculate BMI of person by entering their Weight and Height
*/ 

//pre-processor section 
#include<stdio.h>

//global variable section 

//main function section 
int main(){
    printf("\n\n------------------------------------------------------------------------- \n");
    printf("THIS IS THE PROGRAM APPLICATION TO CALCULATE PERSON BODY MASS INDEX (BMI) \n");
    printf("------------------------------------------------------------------------- \n\n");

    int bodyWeight; 
    float bodyHeight; 
    float yourBMI; 

    //to enter your body weight
    printf("Please Enter Your Body Weight in Kilogram (kg): ");
    scanf("%d", &bodyWeight); 

    //to enter your body height
    printf("Please Enter Your Body Height in Centimeter (cm): ");
    scanf("%f", &bodyHeight); 

    //to calculate your BMI
    //convert your height to meter 
    bodyHeight = bodyHeight * 0.01; 
    yourBMI = bodyWeight / (bodyHeight * bodyHeight); 

    //to display your BMI
    printf("Your Body Mass Index (BMI) is %.2f", yourBMI); 

    printf("\n");
    system("pause");

    return 0; 
}

//user-defined section 

