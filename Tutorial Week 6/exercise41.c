//documentation section 
/*Nurulaqilla Khamis, 14-11-2021, Description: Answer to Exercise 4.1*/ 

//pre-processor section 
#include<stdio.h>

//global variable section 

//main function section 
int main(){
    int a = 10, b = 50, d; 

    d = a; 
    printf("d = d + b is %d \n", d+=b); 

    d = a; 
    printf("d = d * a is %d \n", d*=a); 

    d = a; 
    printf("Remainder for d divided by a is %d", d%=a);

    printf("\n"); 
    system("pause");

    return 0; 

}

//user-defined section 

