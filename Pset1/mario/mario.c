#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        //ask user to enter a number
        n = get_int("height: ");
    }
    //User sould consider an integer between 1 and 8
    while (n <= 0 || n > 8);

    for (int i = 0 ; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int h = n - i; h <= n; h++)
        {
            //Print the result
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
}