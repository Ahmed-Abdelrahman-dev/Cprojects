#include <stdio.h>
#include <ctype.h>

int main(){

    char questions[][100] = { 
        "What is largest planet in the solar system?\n",
        "What is the hottest planet?\n",
        "What planet has the most moons?\n",
        "Is Earth Flat?\n"
    };

    char options[][100] = {
        "A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune\n",
        "A. Mercury\nB. Venus\nC. Earth\nD. Mars\n",
        "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn\n",
        "A. Yes\nB. No\nC. Maybe\nD. sometimes\n"
    };
    int questionsCount = sizeof(questions) / sizeof(questions[0]);

    char answerKey[] = {'A','B','D','D'};


    char userAnswer = '\0';
    int score = 0;
    printf("***** Welcome to Quiz Game *****\n\n");


    for (int i = 0; i < questionsCount; i++)
    {
        printf("%s", questions[i]);
        printf("%s", options[i]);
        printf("Enter the letter of the answer: ");
        scanf(" %c",&userAnswer);

        // change user input to upper case to compare with answerKey
        userAnswer = toupper(userAnswer); 

        if (userAnswer == answerKey[i]){
            printf("\nCorrect!\nYou're a StarLord\n\n");
            score++;
        } else {
            printf("\nIncorrect! The correct answer is %c \nGo to a space club right now!\n\n",answerKey[i]);
        }

    }
    
    printf("\nYou have finished the game. Your Score is: %d out of %d",score,questionsCount);




    return 0;
}