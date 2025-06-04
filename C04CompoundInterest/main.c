#include <stdio.h>
#include <math.h>

int main(){

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;



    printf("******Compound Interest Calculator******\n");
    printf("Please enter the principle(P): ");
    scanf("%lf",&principal);
    printf("Please enter the interst rate(r): ");
    scanf("%lf",&rate);
    rate = rate/100;
    printf("Please enter the years (t): ");
    scanf("%d",&years);
    printf("Please enter compounding times per year (n): ");
    scanf("%d",&timesCompounded);


    total = principal* pow((1+(rate/timesCompounded)),(timesCompounded*years)) ;

    printf("Your total after %d years is : $%.2lf",years, total);


    return 0;

}
