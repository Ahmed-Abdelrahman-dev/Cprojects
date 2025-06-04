#include <stdio.h>

int main(){

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("===== Temperature Convertor =====\n");
    printf("C. Celicius to Fahrenheit.\n");
    printf("F. Fahrenheit to Celicius.\n");
    printf("Is the temperature in Celsius (C) or Fahrenheit (F)?: ");

    scanf("%c",&choice);

    if (choice == 'C')
    {
        // C to F
        printf("Enter the Temperature in Celsius: ");
        scanf("%f",&celsius);
        fahrenheit = (celsius * 9.0/5) +32 ;
        printf("%.1f in Celsius is %.1f in Fahernheit.\n ",celsius,fahrenheit);

    } else if(choice == 'F')
    {
        // F to C
        printf("Enter the Temperature in Fahrenheit: ");
        scanf("%f",&fahrenheit);
        celsius = (fahrenheit - 32) * 5.0/9 ;
        printf("%.1f in Fahrenheit is %.1f in Celsius.\n ",fahrenheit,celsius);
    } else{
        // Invalid choice
        printf("Invalid Choice.\n");
    }
    

    return 0;
}
