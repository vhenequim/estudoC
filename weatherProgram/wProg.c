#include <stdio.h>
#include <stdlib.h>

#define month 12
#define year 5

void printHi (void){
    printf ("\nHi, how are you?");
}

int main (){
    float yearTotal = 0;
    int years = 2010;
    float yearsAvg;
    float monthsAvg;
    float rainfall[year][month] = {
        {10.28,10.57,0.33,0.86,10.31,0.41,0.60,0.74,0.31,10.41,0.40,0.23},   //Ano 1

        {20.28,0.57,10.33,0.86,0.31,0.41,0.60,0.74,0.31,0.41,0.40,10.23}, // Ano 2

        {10.28,0.57,0.33,0.86,10.31,0.41,0.60,0.74,0.31,0.41,0.40,0.23},  // Ano 3

        {20.28,0.57,10.33,0.86,0.31,10.41,0.60,10.74,0.31,0.41,0.40,0.23}, // Ano 4

        {10.28,0.57,0.33,10.86,0.31,0.41,0.60,0.74,10.31,0.41,0.40,0.23}, // Ano 5
    };
    printf ("YEAR       RAINFALL(Inches)\n");
    for (int i = 0; i < 5; i++){
        yearTotal = 0;
        for (int j = 0; j < 12; j++){
            yearTotal += rainfall [i][j];
            yearsAvg += rainfall [i][j];
        }
        printf ("%d         %.1f\n", years, yearTotal);
        years++;
    }
    printf ("Yearly average is %.1f\n", yearsAvg/5);
    printf ("Monthly average:\n|Jan | |Feb| |Mar| |Apr| |May| |Jun| |Jul| |Aug| |Sep| |Oct| |Nov| |Dec|\n");
    for (int j = 0; j < 12; j++){
        monthsAvg = 0;
        for (int i = 0; i < 5; i++){
            monthsAvg += rainfall [i][j];
        }
        printf ("|%.1f| ", monthsAvg/5);
    }
    printHi ();
}
