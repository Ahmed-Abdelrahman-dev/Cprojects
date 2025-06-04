#include <stdio.h>
#include <math.h>


int main(){

    const double PI = 3.14159;
    
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;


    printf("Enter the radius: ");
    scanf("%lf",&radius);

    area = PI * pow(radius,2);
    surfaceArea = 4 * PI * pow(radius,2);
    volume = (4.0/3) * PI * pow(radius,3);

    printf("The area is: %.2lf\n",area);
    printf("The surface area is: %.2lf\n",surfaceArea);
    printf("The volume is: %.2lf\n",volume);


    return 0;
}