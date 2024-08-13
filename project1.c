#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));
    int guess;
    int tries=0;
    int number = (rand() % (100));
    printf("WELCOME TO THE NUMBER GUESSING GAME!\nGuess the number!\n");
    while (1)

    {
        
        scanf("%d", &guess);
        tries+=1;

        if (number==guess)
        {
            printf("YOU WIN! The number was %d and you took %d tries to guess it!\n", number, tries);
            break;
        }

        else if (guess<number){
            printf("Guess higher!\n");
        }

        else if (guess>number){
            printf("Guess lower!\n");
        }
        
        else
        {
            printf("Not a valid response. Please try again!\n");
            tries-=1;
        }
        

    }
    
    return 0;
}
