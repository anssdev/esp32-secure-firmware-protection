#include <stdlib.h>
#include <stdio.h>

int memory = 80;

int main(){

    int *x = malloc(sizeof(int)); // space for one int
    int *arr = malloc(sizeof(int)*100); // space for 100 integers

    if (x == NULL || arr == NULL) {
        free(arr);
        free(x); 
        return EXIT_FAILURE;
    }

    for (int i = 0; i < 100; i++){ arr[i] = i+2; }
    *x = 42;

    printf("The value of x is: %d\n", *x);
    printf("The value of arr[0] is: %d\n", arr[0]);

    free(arr); 
    free(x);

    arr = NULL;
    x = NULL;


}
