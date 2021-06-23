#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int length;
    int width;
} Rectangle;

typedef struct
{
    int x;
    int y;
} Position;

typedef struct
{
    char owner[30];
    Rectangle rectangle;
    Position position;
} buildingPlan;

int main()
{
    Rectangle myRectangle;
    myRectangle.length = 10;
    myRectangle.width = 20;
    printf("Rectangle length: %d\nRectangle width: %d\n", myRectangle.length, myRectangle.width);


    buildingPlan plan = {"Alex Wood", {10, 20}, {32, 48}};
    printf("The house at %d %d, is %d by %d and the owner is %s\n",
    plan.position.x,
    plan.position.y,
    plan.rectangle.width,
    plan.rectangle.length,
    plan.owner);

    int size = 3;
    Position positions[] = {{1, 2},{3, 4},{5, 6}};

    for(int i = 0; i < size; i++)
    {
        printf("%d %d\n", positions[i].x, positions[i].y);
    }
    return 0;
}
