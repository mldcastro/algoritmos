/* This program allows the user to input two integer vectors and finds the intersection
 of these vectors. The program also displays the total number of intersections. */
#include <stdio.h>

void read_vector(int vector[], int vector_len) {
    // This function is reading coordinates for a vector

    for (int i = 0; i < vector_len; i++) {
        scanf(" %d", &vector[i]);
    }
}

int intersections(
    int vector1[],
    int length1,
    int vector2[],
    int length2,
    int intersections[]) {
    /* This function iterates over vector1 and vector2. If some element is present
    in both vectors, then we add this element to intersections, which has its own index.
  */

    int total_intersections = 0;

    for (int v1_idx = 0, inter_idx = 0; v1_idx < length1; v1_idx++) {
        for (int v2_idx = 0; v2_idx < length2; v2_idx++) {
            if (vector1[v1_idx] == vector2[v2_idx]) {
                intersections[inter_idx] = vector1[v1_idx];
                inter_idx++; // update inter_idx independently because the intersections
                             // array not necessarily will have the same size as vector1
                             // or vecotr2

                total_intersections++;
            }
        }
    }

    return total_intersections;
}

int main() {
    int length1;

    printf("Enter the size of the first vector: ");
    scanf("%d", &length1);

    int vector1[length1];

    printf("Enter the %d values of the first vector:\n", length1);
    read_vector(vector1, length1);

    int length2;
    printf("Enter the size of the second vector: ");
    scanf("%d", &length2);

    int vector2[length2];

    printf("Enter the %d values of the second vector:\n", length2);
    read_vector(vector2, length2);

    int *intersection_values; // Initialize a pointer to hold all intersections
    const int NUM_INTERSECTIONS =
        intersections(vector1, length1, vector2, length2, intersection_values);

    printf("Number of intersections is %d\n", NUM_INTERSECTIONS);
    printf("The intersections are: [ ");
    for (int i = 0; i < NUM_INTERSECTIONS; i++) {
        printf("%d ", intersection_values[i]);
    }

    printf("]\n");

    return 0;
}
