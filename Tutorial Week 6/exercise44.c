//documentation section 
/*Nurulaqilla Khamis, 14-11-2021, Description: Answer to Exercise 4.4 this program is used to convert length feet to cm*/ 

//pre-processor section 
#include<stdio.h>

//global variable section 

//main function section 
int main(){
    //declare variable
    float feetValue, lengthValue; 

    //input - user input the value of length
    printf("Enter Value of Length in feet (ft): ");
    scanf("%f", &feetValue); 

    //process - to convert length in feet to centimetre (cm)
    lengthValue = feetValue * 30; 

    //output - to display length in feet convert to centimetre (cm)
    printf("Value of Length in Feet, %.2f ft When Convert to Centimetre is %.2f cm", feetValue, lengthValue);

    return 0; 

}

//user-defined section 

