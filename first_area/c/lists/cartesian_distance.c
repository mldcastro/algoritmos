#include <stdio.h>
#include <math.h>

float cartesian_distance(float point1[2], float point2[2]) {
    return sqrtf(
        powf(point2[0] - point1[0], 2.0) + powf(point2[1] - point1[1], 2.0)
    );
}

int main(void) {
    float x1, y1, x2, y2, distance;
    float point1[2], point2[2];

    scanf(" %f", &x1);
    scanf(" %f", &y1);
    scanf(" %f", &x2);
    scanf(" %f", &y2);

    point1[0] = x1;
    point1[1] = y1;
    point2[0] = x2;
    point2[1] = y2;

    distance = cartesian_distance(point1, point2);

    printf("Distance: %f\n", distance);

    return 0;
}
