//documentation section 
/*Nurulaqilla Khamis, 14-11-2021, Description: Answer to Exercise 4.3 this program is used to calculate area of rectangle*/ 

//pre-processor section 
#include<stdio.h>

//global variable section 

//main function section 
int main(){
    //declare variable 
    float width, height, areaRect; 

    //input - user input the value
    printf("Enter Height of Rectangle in Metre (m): ");
    scanf("%f", &height); 

    printf("Enter Width of Rectangle in Metre (m): ");
    scanf("%f", &width); 

    //process - to calculate area of rectangle
    areaRect = width * height;

    //output - to display area of rectangle
    printf("When height is %.2f meter and width is %.2f meter, area of rectangle is %.2f meter squared", height, width, areaRect); 

    return 0; 

}

//user-defined section 

