//time function comes from time.h
//number and rand is comes from stdlib.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguesses = 0;
    srand(time(0));
    number = rand() % 100 + 1; //generate random number between 1 to 100
    //printf("The number is %d\n", number);
    //keep running the loop until the number is guessed
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please\n");
        }
        else if(guess<number)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("You got it in %d attempts\n", nguesses);
            
        }
        nguesses++;
    } while (guess != number);
    
    return 0;
}