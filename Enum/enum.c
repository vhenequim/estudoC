#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int A = atoi(argv[1]);
    enum COMPANY{GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT};
    enum COMPANY one = XEROX;
    enum COMPANY two = GOOGLE;
    enum COMPANY three = EBAY;
    printf("%d\n%d\n%d\n%d\n", one, two, three, A);
    A++;
    printf ("%d e %d\n", +A, A++);
    printf("%d", A);
    return 0;
}

