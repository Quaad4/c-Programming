#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    int input;

    printf("Enter a year: ");
    scanf("%d", &input);

    if(input % 400 == 0)
    {
        printf("Leap year");
    }
    else if(input % 100 == 0)
    {
        printf("Not a leap year");
    }
    else if(input % 4 == 0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a leap year");
    }


    return 0;
}
