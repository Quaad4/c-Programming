#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 5;
    int guess;
    int guess_counter;
    int guesses_allowed = 3;
    int outOfGuesses = 0;

    while(guess != secretNumber && outOfGuesses == 0)
    {
        if(guess_counter < guesses_allowed)
        {
            printf("Take a guess: ");
            scanf("%d", &guess);
            guess_counter++;
            if(guess < secretNumber)
            {
                printf("Too low!\n");
            }
            else if(guess > secretNumber)
            {
                printf("Too high!\n");
            }
            else
            {

            }
        }
        else
        {
            outOfGuesses = 1;
        }
    }

    if(outOfGuesses == 1)
    {
        printf("You have ran out of guesses, you lose!");
    }
    else
    {
        printf("You got it correct!");
    }
    return 0;
}
