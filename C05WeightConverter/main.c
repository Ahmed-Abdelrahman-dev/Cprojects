#include <stdio.h>

int main(){

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("===== Weight Conversion Calculator =====\n");
    printf("1. Kilograms to Pounds.\n");
    printf("2. Pounds to Kilograms.\n");
    printf("Enter your choice (1 or 2): ");

    scanf("%d",&choice);

    if (choice == 1){ 
        // kilo to pounds
        printf("Enter the weight in kilograms: ");
        scanf("%f",&kilograms);
        printf("Weight in pounds is : %.2f .\n", (kilograms*2.20462) );
    }else if (choice == 2){ 
        // pounds to kilo
        printf("Enter the weight in pounds: ");
        scanf("%f",&pounds);
        printf("Weight in kilograms is : %.2f .\n", (pounds/2.20462) );
    }else if (choice == 2){ 
    } else{

        printf("Sorry, incorrect choice\n");
 
    }

    return 0; 
}

