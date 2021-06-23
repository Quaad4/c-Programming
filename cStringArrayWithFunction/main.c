#include <stdio.h>
#include <stdlib.h>

void printNames(char names[][20], int nameSize)
{
    for(int i = 0, nameNum = 1; i < nameSize; i++, nameNum++)
    {
        printf("Name[%d]: %s\n", nameNum, names[i]);
    }
}

int main()
{
    int nameSize = 5;
    char names[][20] = {"Alex", "Deb", "Mike", "Tom", "Rob"};
    printNames(names, nameSize);

    return 0;
}
