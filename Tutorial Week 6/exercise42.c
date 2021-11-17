//documentation section 
/*Nurulaqilla Khamis, 14-11-2021, Description: Answer to Exercise 4.2 this program is used to calculate area of circle*/ 

//pre-processor section 
#include<stdio.h>

//global variable section 
#define PI 3.142

//main function section 
int main(){
    //declare variable
    float radiusCircle, areaCircle; 

    //input - user input value radius of circle
    printf("Enter Radius of Circle in Metre (m): "); 
    scanf("%f", &radiusCircle); 

    //process - to calculate area of circle
    areaCircle = PI * radiusCircle * radiusCircle; 

    //output - to display area of circle
    printf("Area of Circle for Radius %.2f metre is %.2f", radiusCircle, areaCircle);

    printf("\n");
    system("pause");

    return 0;  

}

//user-defined section 

