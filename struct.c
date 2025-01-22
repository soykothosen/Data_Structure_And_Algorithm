#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1 = {10, 20};
    //struct Point *ptr = &p1; // Pointer to the structure p1

    // Accessing structure members using the pointer
    //printf("x = %d, y = %d\n", ptr->x, ptr->y); // Using -> operator
    //printf("x = %d, y = %d\n", (*ptr).x, (*ptr).y); // Equivalent using * and .
    printf("x = %d, y = %d\n", p1.x, p1.y);

    return 0;
}

