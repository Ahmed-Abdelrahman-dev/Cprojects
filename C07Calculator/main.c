#include <stdio.h>

int main(){

    // calculator program

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0; 

    printf("====== Welcome to Calculator =======\n");

    printf("Enter the first number: ");
    scanf("%lf",&num1);
    scanf("%c"); // takes care of the buffred \n
    
    printf("Enter the operator (+ - * /): ");
    scanf("%c",&operator);

    printf("Enter the second number: ");
    scanf("%lf",&num2);


    switch (operator)
    {
    case '+':
        result = num1 + num2 ;
        break;
    case '-':
        result = num1 - num2 ;
        break;
    case '*':
        result = num1 * num2 ;
        break;
    case '/':
        if(num2 != 0){
            result = num1 / num2 ;
        } else{
            printf("Can't divid by zero.\n");
        }
        break;
    default:
        printf("Invalid operator. Please, choose (+ - * /).\n");
        break;
    }


    printf("Result : %.4f", result);

    return 0;

}

