#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    char playerChoice, computerChoice;
    int randomNum;
    srand(time(0));
    printf("Let's play Rock, Paper, Scissors!\n");
    printf("Enter your choice (R for Rock, P for Paper, S for Scissors): ");
    scanf(" %c", &playerChoice);
    if(playerChoice >= 'a' && playerChoice <= 'z') {
        playerChoice = playerChoice - 'a' + 'A';
    }
    randomNum = rand() % 3;
    if(randomNum == 0) {
        computerChoice = 'R';
    } else if(randomNum == 1) {
        computerChoice = 'P';
    } else {
        computerChoice = 'S';
    }
    printf("Computer chose: %c\n", computerChoice);
    if(playerChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if((playerChoice == 'R' && computerChoice == 'S') ||
              (playerChoice == 'P' && computerChoice == 'R') ||
              (playerChoice == 'S' && computerChoice == 'P')) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}