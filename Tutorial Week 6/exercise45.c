//documentation section 
/*Nurulaqilla Khamis, 14-11-2021, Description: Answer to Exercise 4.5 this program is used to calculate root of quadratic equations*/ 

//pre-processor section 
#include<stdio.h>
#include<math.h>

//global variable section 

//main function section 
int main(){
    //declare variable
    int a, b, c;  
    float d, x1, x2; 

    //input - user input the value
    printf("Enter Value for Coefficient a: "); 
    scanf("%d", &a); 

    printf("Enter Value for Coefficient b: "); 
    scanf("%d", &b);

    printf("Enter Value for Coefficient c: ");
    scanf("%d", &c); 

    //process - to calculate value d and root of quadratic equations 
    //compute value of d
    d = sqrt((b * b) - 4 * a * c);

    //compute value of x1 and x2
    x1 = (-b + d)/(2*a); 

    x2 = (-b - d)/(2*a);

    //output - to display root of quadratic equations
    printf("Root of Quadratic Equations is %.2f and %.2f", x1, x2);

    return 0;
}

//user-defined section 

