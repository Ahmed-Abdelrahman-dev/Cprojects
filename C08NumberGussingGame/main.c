
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    srand(time(NULL));

    int guess = 0;
    int tries = 0;

    int min = 1;
    int max = 100;

    int answer = (rand() % (max-min+1))+min;

    //printf("%d \n",answer ); prints the correct answer use for testing 


    printf("\n***** NUMBER GUESSING GAME ******\n");
    
    do{
        printf("\nEnter a number between (1-100)");
        scanf("%d",&guess);
        tries++;
        
        if(guess < answer){
            printf("Answer is Higher");
        }else if(guess > answer){
            printf("Answer is Lower");
        }else{
            printf("CORRECT!\n");
        }
    }while(guess != answer);

    printf("The correct answer is %d \n",answer );
    printf("You guessed it in %d \n",tries );




}