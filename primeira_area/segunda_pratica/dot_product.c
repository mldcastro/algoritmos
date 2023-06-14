/* This program performs the dot product between two vectors.
The user input is the coordinates of both vectors and the output is the dot product.*/

#include <stdio.h>

#define VECTOR_MAX_SIZE 3

int main() {
    int first_vector[VECTOR_MAX_SIZE], second_vector[VECTOR_MAX_SIZE], dot_product;
    /* Initialize the vectors with size 3. */

    /* These loops through the vectors are assigning the user inputs 
    to the respective coordinate in the array.*/
    printf("Enter the coordinates of the first vector:\n");
    for (int i = 0; i < VECTOR_MAX_SIZE; i++) {
        printf("Coordinate %d: ", i + 1);
        scanf(" %d", &first_vector[i]);
    }

    printf("Enter the coordinates of the second vector: \n");
    for (int i = 0; i < VECTOR_MAX_SIZE; i++) {
        printf("Coordinate %d: ", i + 1);
        scanf("%d", &second_vector[i]);
    }

    dot_product = 0; // Assign 0 to dot_product because we are going to update its value
                     // inside the loop.
    for (int i = 0; i < VECTOR_MAX_SIZE; i++) {
        dot_product += first_vector[i] * second_vector[i];
    }

    printf("The dot product of the two vectors is: %d\n", dot_product);
    return 0;
}
