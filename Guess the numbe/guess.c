#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    // Crinado o numero aleatorio//
    time_t t;
    srand ((unsigned)time(&t));
    int randomNumber = rand()%21;
    //
    int chave = 0;
    int digitedNumber, tries=5;
    printf ("You have to guess the number! Type a number between 0 and 20! You have 5 tries!\n");
    while (chave != 1){
        scanf ("%d", &digitedNumber);
        if ( digitedNumber == randomNumber){
            printf ("Congrats! You have guessed it\n");
            chave++;
        }
        else {
            if ( digitedNumber >= 0 && digitedNumber <= 20){
                tries--;
                if ( tries == 0){
                    printf ("You couldnt guess it\n");
                    chave = 1;
                }
                else{
                    printf ("%d\n", digitedNumber);
                    if (digitedNumber > randomNumber){
                        printf ("Wrong! %d tries left! The number is lower\n", tries);
                    }
                    else{
                        printf ("Wrong! %d tries left! The number is Higher\n", tries);
                    }
                }
            }
            else {
                printf ("Please type a number between 0 and 20\n");
            }

        }
    }

}