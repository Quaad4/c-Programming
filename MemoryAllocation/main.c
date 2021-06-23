#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //pointer and variable
    int *ptr;
    int n;

    // asking for input
    printf("How many inputs? ");
    scanf("%d", &n);

    //allocating memory to pointer
    ptr = (int*) malloc(sizeof(int) * n);

    //for loop to take in input
    for(int i = 0; i < n; i++)
    {
        printf("Enter number [%d] ", (i + 1));
        scanf("%d", &ptr[i]);
    }

    //for loop to output result = memory addresses
    for(int i = 0; i < n; i++)
    {
        printf("number address [%d] %d\n", (i + 1), &ptr[i]);
    }

    return 0;
}
