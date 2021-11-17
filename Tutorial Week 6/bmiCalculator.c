//documentation section
//nurulaqilla khamis, 14/11/2021, this program is used to calculate BMI person

//pre-processor section 
#include<stdio.h>

//global variable section 


//main function section
int main(){
    //declare variable 
    int weightPerson, heightPerson; 
    float heightPersonMetre, bmiPerson; 

    //user input their weight and height
    printf("Enter Your Weight: ");
    scanf("%d", &weightPerson); 

    printf("Enter Your Height: "); 
    scanf("%d", &heightPerson); 

    //this is to calculate BMI person
    heightPersonMetre = 0.01 * heightPerson; 

    bmiPerson = (weightPerson) / (heightPersonMetre * heightPersonMetre);

    //this to display output BMI 
    printf("Your BMI is %.2f", bmiPerson);

    return 0; 

}

//user defined section

