/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include <stdio.h>
void reverse() {
	char c;
	scanf("%c", &c);
    if (c != '\n') {
        reverse();
        printf("%c", c);
    }
}

void main() {
    printf("Enter a sentence: \n");
    fflush(stdout);fflush(stdin);
    reverse();
}
