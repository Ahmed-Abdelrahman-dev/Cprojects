#include <stdio.h>
#include <string.h>

int main(){

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f; 



    printf("What item would you like to buy?:\t");
    fgets(item,sizeof(item),stdin);
    item[strlen(item)-1] = '\n';
    printf("What is the price of each?:\t");
    scanf("%f",&price);
    printf("How many would you like?:\t");
    scanf("%d",&quantity);

    total = price * quantity;
    printf("Your total is :\t %c%.2f",currency , total);

    return 0;

}