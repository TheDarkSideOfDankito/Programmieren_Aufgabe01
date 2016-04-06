//
// Created by ganymed on 21/03/16.
//

#ifndef OUTPUT_C
#define OUTPUT_C


#include <stdio.h>

void printlnString(char* output) {
    printf("%s\r\n", output);
}

// oh C, you're really an old, old language! no method / function overloading
void printlnInt(int output) {
    printf("%d\r\n", output);
}

void printlnFloat(float output) {
    printf("%f\r\n", output);
}

void printIntMatrix(int** inputMatrix, int countColumns, int countRows) {
    for(int row = 0; row < countRows ; row++) {
        for (int column = 0; column < countColumns; column++) {
            printf("%d ", inputMatrix[row][column]);
        }

        printf("\r\n");
    }
}


#endif
