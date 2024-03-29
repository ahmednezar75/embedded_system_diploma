/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include <stdio.h>
int Prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void printPrime(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (Prime(i)) {
            printf("%d\t", i);
        }
    }
}

int main() {
    int x, y;
    printf("Enter the starting number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &x);
    printf("Enter the ending number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &y);
    printPrime(x, y);
}
