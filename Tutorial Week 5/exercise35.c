//documentation section 
/*Nurulaqilla Khamis, 8/11/2021, description: Tutorial answer for Question 3.5 */ 

//pre-processor section 
#include<stdio.h>

//global variable section 

//main function section 
int main(){
    //write a program where the user can input any value for Ali's weight and height. Display the value. 
    int aliWeight; 
    int aliHeight; 

    //to enter value for Ali weight 
    printf("Enter Ali's Weight: "); 
    scanf("%d", &aliWeight); 

    //to enter value for Ali height
    printf("Enter Ali's Height: "); 
    scanf("%d", &aliHeight); 

    //display Ali weight and height 
    printf("Ali's weight is %d kg and height is %d cm", aliWeight, aliHeight); 

    printf("\n");
    system("pause");

    return 0; 
}

//user-defined section 

