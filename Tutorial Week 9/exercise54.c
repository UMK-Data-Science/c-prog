//program for Beach Medical Centre (BMC) Health Package

#include<stdio.h>
int main()
{

    char gender;
    
    int essential = 500;
    int prestige = 1000; 
    int package; 
    int selection = 1; 

    float fee; 

    while(selection == 1){
        printf("Enter Gender: ");
        scanf(" %c", &gender);

        if (gender == 'F')
        {
            printf("Enter Package [1: Essential, 2: Prestige]: ");
            scanf(" %d", &package);

            if (package == 1)
            {
                printf("Gender: Female \n");
                printf("Package: Essential \n");
                fee = essential * 0.25;
                printf("Fee: RM %.2f\n", fee);
            } 

            else if (package == 2)
            {
                printf("Gender: Female \n");
                printf("Package: Prestige \n");
                fee = prestige * 0.25;
                printf("Fee: RM %.2f\n", fee);
            }

        }

        else{
            printf("Package: Male \n");
            
        }
        printf("Do you want to continue?[1 = Yes, 0 = No]: ");
        scanf(" %d", &selection);

        printf("\n");

        }

    return 0;


}
