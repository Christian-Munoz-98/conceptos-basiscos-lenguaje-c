/*
"Es de humans errar"; 

//string literal (c lo almacena como un array)

//hay que usar el "const" statement para determinar que es una constante

const int COSTHOTDOG = 100;
const float BILL = 100.58;
const char NEWLINE = '\n';

#define PAPERCOST 3;
*/

#include <stdio.h>

#define PIZZACOST 1.5
const NEWLINE = '\n';

int main(){
    float costoPizzas;
    float numberOfSlices = 3;
    costoPizzas  = PIZZACOST * numberOfSlices;

    printf("Total bill: %c %f",NEWLINE, costoPizzas);
}

