//Take two structs as input and check if they are identical.
#include <stdio.h>
struct Point {
    int x;
    int y;
};
int arePointsIdentical(struct Point p1, struct Point p2) {
    return (p1.x == p2.x) && (p1.y == p2.y);
}
int main() {
    struct Point point1, point2;

    printf("Enter coordinates for Point 1 (x y): ");
    scanf("%d %d", &point1.x, &point1.y);

    printf("Enter coordinates for Point 2 (x y): ");
    scanf("%d %d", &point2.x, &point2.y);

    if (arePointsIdentical(point1, point2)) {
        printf("The two points are identical.\n");
    } else {
        printf("The two points are not identical.\n");
    }

    return 0;
}