//documentation section
/* anwer for exercise 7.2 */

//pre-processor section
#include<stdio.h>

//global variable section
#define USD 0.24
float moneyConverter(float myr);

//main function section
int main(){
    float myr;
    printf("Enter MYR: ");
    scanf("%f", &myr);

    printf("%.2f MYR in USD is %2.2f", myr, moneyConverter(myr));
    return 0;

}

//user defined section
float moneyConverter(float myr){
    float converter;
    converter = myr * USD;
    return converter;
}