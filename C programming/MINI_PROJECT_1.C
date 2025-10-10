//....NUMBER GUESSING GAME....\\

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with current time
    srand(time(0));
    // Generate a random number between 0 to 100.
    int randomnumber = (rand() % 100) + 1;

    int no_of_guesses = 0;
    int guessed_number;

    do
    {
        printf("Guess the number : ");
        scanf("%d", &guessed_number);
        if (guessed_number > randomnumber)
        {
            printf("Guess a lower number\n");
        }
        else if (guessed_number < randomnumber)
        {
            printf("Guess a higher number\n");
        }
        else
        {
            printf("Congrats!You have guessed the correct number!\n");
        }
        no_of_guesses++;

    } while (guessed_number != randomnumber);

    printf("You have guessed the number in %d guesses\n", no_of_guesses);

    return 0;
}