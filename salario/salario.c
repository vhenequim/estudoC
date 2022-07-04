#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    float hours, extrahours, taxes, grosspay, extrapay, netpay;
    printf ("Quantas horas vc trabalhou?\n");
    scanf ("%f", &hours);
    if (hours > 40){
        extrahours = hours - 40;
        extrapay = extrahours*18;
        grosspay = (40*12)+extrapay;
    }
    else{
        grosspay = hours*12;
    }
    printf ("Grosspay = %.2f$\n", grosspay);
    if (grosspay <= 300){
        taxes = grosspay*.15;
        netpay = grosspay - taxes;
    }
    else if (grosspay <= 450){
        taxes = 300*.15 + (grosspay-300)*.20;
        netpay = grosspay - taxes;
    }
    else{
        taxes = 300*.15 + 150*.20 + (grosspay - 450)*.25;
        netpay = grosspay - taxes;
    }
    printf ("Taxes = %.2f$\nNetpay = %.2f$\n", taxes, netpay);

}