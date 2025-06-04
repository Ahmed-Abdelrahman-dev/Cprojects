#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice,int computerChoice);


int main(){

    srand(time(NULL));

    printf("\n***** ROCK PAPER SCISSORS *****\n\n");

    int userChoice = getUserChoice(); // input
    int computerChoice = getComputerChoice(); // random


    switch(userChoice){
        case 1:
            printf("\nYou chose ROCK!\n");
            break;
        case 2: 
            printf("\nYou chose PAPER!\n");
            break; 
        case 3 :
            printf("\nYou chose SCISSORS!\n");
            break;
    }

    switch(computerChoice){
        case 1:
            printf("\nComputer chose ROCK!\n");
            break;
        case 2: 
            printf("\nComputer chose PAPER!\n");
            break; 
        case 3 :
            printf("\nComputer chose SCISSORS!\n");
            break;
    }

    checkWinner(userChoice,computerChoice);

    return 0;
}

    int getComputerChoice(){
        return ((rand() % 3) +1);
    }

    int getUserChoice(){
        int choice = 0;
        do{
            printf("1. ROCK\n");
            printf("2. PAPER\n");
            printf("3. SCISSORS\n");
            printf("Please enter 1, 2, or 3: ");

            scanf(" %d",&choice);
        }while(choice < 1 || choice > 3);

        return choice;
    }

    void checkWinner(int userChoice,int computerChoice){

        if(userChoice == computerChoice){
        printf("\nIt's a TIE!\n\n");
        } else if(
            (userChoice == 1 && computerChoice == 3) ||
            (userChoice == 2 && computerChoice == 1) ||
            (userChoice == 3 && computerChoice == 2)   ){
            printf("\nYou WIN!\n\n");

        }else {
            printf("\nYou LOOSE!\n\n");
        }

    }