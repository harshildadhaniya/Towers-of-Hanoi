#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void hanoi_operation(int n, char from, char dest, char aux){

    if (n > 0){
        hanoi_operation(n-1, from, aux, dest);
        printf("Make a move from %c to %c.\n", from, dest);
        hanoi_operation(n-1, aux, dest, from);
    }

}

void hanoi(int n){

    if (n <= 0){
        printf("Invalid input.\n");
        printf("Disl cannot be negative or 0\n");
    }
    else {
        hanoi_operation(n, 'A', 'B', 'C');
    }
}

int main(){
    printf("Welcome to the Towers of Hanoi\n");
    printf("We will move all the disks from Pole A to Pole C\n");

    int num;

    printf("Enter the number of disks at Pole A: ");
    scanf("%d", &num);

    hanoi(num);
}