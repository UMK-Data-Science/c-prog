//documentation section 
/*Nurulaqilla Khamis, 8/11/2021, description: Tutorial answer for Question 3.6 */ 

//pre-processor section 
#include<stdio.h>

//global variable section 

//main function section 
int main(){
    //write a program where the user can input any value for the width and length. Display the inserted value. 
    float rectWidth; 
    float rectHeight; 

    //to insert value rectangle width
    printf("Enter Width of Rectangle: "); 
    scanf("%f", &rectWidth); 

    //to insert value rectangle height
    printf("Enter Height of Rectangle: "); 
    scanf("%f", &rectHeight); 

    //display inserted value
    printf("Rectangle Width is %.2f m and Height is %.2f m", rectWidth, rectHeight);

    printf("\n");
    system("pause");

    return 0; 
}

//user-defined section 

