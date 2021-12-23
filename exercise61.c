//documentation section
/*to calculate APC in the program tutorial 6.1*/

//pre-processor section
#include<stdio.h>

//global variable section 

//main function seciton
int main()
{
    //declare and initialize variable
    int publishingModeSelection; 
    char ieeeMemberSelection;
    float fee;
    int continueSelection;

    float greenOpenAccess = 5000;
    float goldenOpenAccess = 7000;

    do{
        //user to enter publishing mode
        printf("Enter Mode: [1: Green Open Access, 2: Golden Open Access]: ");
        scanf(" %d", &publishingModeSelection);

        //user select IEEE member or not?
        printf("IEEE Member [Y: Yes, N: No]: ");
        scanf(" %c", &ieeeMemberSelection);

        if (ieeeMemberSelection == 'Y')
        {
            if (publishingModeSelection == 1)
            {
                //green open access 
                fee = greenOpenAccess - (greenOpenAccess * 0.25);
                //display output
                printf("-----OUTPUT----- \n");
                printf("Member: IEEE Member \n");
                printf("Mode: Green Open Access \n"); 
                printf("Fee: RM %.2f \n", fee);
            }

            else if(publishingModeSelection == 2)
            {
                fee = goldenOpenAccess - (goldenOpenAccess * 0.25);
                //display output
                printf("-----OUTPUT----- \n");
                printf("Member: IEEE Member \n");
                printf("Mode: Golden Open Access \n"); 
                printf("Fee: RM %.2f \n", fee);
            }

        }

        else if (ieeeMemberSelection == 'N')
        {
            if (publishingModeSelection == 1)
            {
                fee = greenOpenAccess;
                //display output
                printf("-----OUTPUT----- \n");
                printf("Member: Non-IEEE Member \n");
                printf("Mode: Green Open Access \n"); 
                printf("Fee: RM %.2f \n", fee);
            }

            else if(publishingModeSelection == 2)
            {
                fee = goldenOpenAccess; 
                //display output
                printf("-----OUTPUT----- \n");
                printf("Member: Non-IEEE Member \n");
                printf("Mode: Golden Open Access \n"); 
                printf("Fee: RM %.2f \n", fee);
            }
        }

        //to continue or not?
        printf("Do You Want to Continue? [1 = Yes, 0 = No]: ");
        scanf(" %d", &continueSelection);

    }

    while(continueSelection==1);

}

//user-defined section