#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    double nro;

    do
    {
        //Ask user to enter a number
        nro = get_double("Cambio: ");
    }
    while (nro < 0);

    int nro1 = (nro * 100);

    //Calculate the number of coins of 25 cents
    int twentyfive = nro1 / 25;

    int twentyfive1 = twentyfive * 25;

    int ten = (nro1 - twentyfive1) / 10;

    int ten1 = (ten * 10);

    int five = (nro1 - twentyfive1 - ten1) / 5;

    int five1 = (five * 5);

    int one = (nro1 - twentyfive1 - ten1 - five1);

    int change = (twentyfive + ten + five + one);

    //Print the result
    printf("change owed: %i \n", change);


}