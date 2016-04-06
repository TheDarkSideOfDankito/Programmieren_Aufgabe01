#include <stdio.h>
#include "input.h"
#include "output.h"

void task01();
void task02();
void task03();
void task04();
void task05();
void task06();

int main() {
    //task01();
    //task02();
    //task03();
    //task04();
    //task05();
    task06();

    return 0;
}


void task01() {
    printlnString("Task01: Enter a number to which will be counted ascending: ");
    int input = readIntFromCommandline();

    for(int i = 0; i <= input; i++) {
        printlnInt(i);
    }
}

void task02() {
    printlnString("Task02: Enter a number from which descending all even numbers will be printed: ");
    int input = readIntFromCommandline();

    for(int i = input; i >= 2; i--) {
        if(i % 2 == 0) {
            printlnInt(i);
        }
    }
}

void task03() {
    printlnString("Task03: Enter an integer number to which upcounting from 1 the sum will be calculated: ");

    int input = readIntFromCommandline();
    int sum = 0;

    for(int i = 1; i <= input; i++) {
        sum += i;
    }

    printlnInt(sum);
}

void task04() {
    int sum = 0;
    int input = 1;

    while(input != 0) {
        if(input == 1) {
            sum++;
            printlnInt(sum);
        }

        if(input == 1) {
            printlnString("Noch eine Zahl?"); // ok, seems that there has to be printed exactly 'Noch eine Zahl?'
        }
        else if(input != 0) {
            printlnString("Come on, it ain't that hard to enter a '0' or '1': ");
        }

        input = readIntFromCommandline();

    }

    //printlnString("Bye, bye");
}

// oh C, you're a really old, old language - no way to pass or return multidimensional arrays to or from functions
void task05() {
    int countColumns = 3;
    int countRows = 1;
    //int* inputMatrix = readIntMatrixFromCommandline(countColumns, countRows);
    float inputMatrix1[countRows][countColumns];
    float inputMatrix2[countRows][countColumns];

    // fill matrices with input from command line
    printlnString("Input 3 floating point numbers for Vector 1");
    for(int row = 0; row < countRows; row++) {
        for (int column = 0; column < countColumns; column++) {
            scanf("%f", &inputMatrix1[row][column]);
        }
    }

    printlnString("Now input 3 floating point numbers for Vector 2");
    for(int row = 0; row < countRows; row++) {
        for (int column = 0; column < countColumns; column++) {
            scanf("%f", &inputMatrix2[row][column]);
        }
    }


    // now calculate scalar product
    float scalarProduct = 0;

    for(int row = 0; row < countRows; row++) {
        for (int column = 0; column < countColumns; column++) {
            scalarProduct += inputMatrix1[row][column] * inputMatrix2[row][column];
        }
    }


    // and finally print scalar product to screen
    printlnFloat(scalarProduct);
}

void task06() {
    int countColumns = 3;
    int countRows = 2;
    //int* inputMatrix = readIntMatrixFromCommandline(countColumns, countRows);
    int inputMatrix[countRows][countColumns];
    int resultMatrix[countColumns][countRows];

    // fill matrix with input from command line
    printlnString("Input a 2 x 3 Matrix with integer numbers");
    for(int row = 0; row < countRows; row++) {
        for (int column = 0; column < countColumns; column++) {
            scanf("%i", &inputMatrix[row][column]);
        }
    }


    // now calculate -2AT
    for(int row = 0; row < countRows; row++) {
        for (int column = 0; column < countColumns; column++) {
            resultMatrix[column][row] = (-2) * inputMatrix[row][column];
        }
    }


    // and finally print result matrix to screen
    for(int row = 0; row < countColumns; row++) {
        for (int column = 0; column < countRows; column++) {
            printf("\t%d", resultMatrix[row][column]);
        }

        printf("\r\n");
    }
}