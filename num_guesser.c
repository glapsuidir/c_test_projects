#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int num_gen() {
    int num = rand() % 50 + 1;
    return num;
}

int validate_guess(int guess, int correct_num) {
    if (guess < 1 || guess > 50) {
        printf("Please enter a number between 1 and 50.\n");
        return 0;
    }

    if (guess == correct_num) {
        printf("Correct!\n");
        return 1;
    } else {
        printf("Incorrect! The correct number was %d.\n", correct_num);
        return 0;
    }
}

int main() {
    srand(time(NULL));
    int guess;
    int correct_num = num_gen();

    printf("Guess a number between 1 and 50: ");
    scanf("%d", &guess);
    validate_guess(guess, correct_num);
    return 0;
}
