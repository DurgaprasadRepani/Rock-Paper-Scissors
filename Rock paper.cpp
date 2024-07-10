#include <iostream>
#include <cstdlib>
#include <ctime>

const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';

using namespace std;
char getComputerOption() {
    int num = rand() % 3 + 1;

    if(num == 1) return ROCK;
    else if(num == 2) return PAPER;
    else return SCISSORS;
}

char getUserOption() {
    char c;
    cout << "Rock, Paper, and Scissors Game!" << endl;
    cout << "Choose one of the following options"  << endl;
    cout << "-----------------------------------"  << endl;
    cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
    cin >> c;

    while (c != ROCK && c != PAPER && c != SCISSORS) {
        cout << "Please enter one of the following options only. " << endl;
        cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
        cin >> c;
    }

    return c;
}

void showSelectedOption(char option) {
    if (option == ROCK) cout << "Rock" << endl;
    if (option == PAPER) cout << "Paper" << endl;
    if (option == SCISSORS) cout << "Scissors" << endl;
}

void chooseWinner(char uChoice, char cChoice) {
    if (uChoice == ROCK && cChoice == PAPER) {
        cout << "Computer Wins! Paper wraps Rock." << endl;
    } else if (uChoice == PAPER && cChoice == SCISSORS) {
        cout << "Computer Wins! Scissors cut Paper." << endl;
    } else if (uChoice == SCISSORS && cChoice == ROCK) {
        cout << "Computer Wins! Rock smashes Scissors." << endl;
    } else if (uChoice == ROCK && cChoice == SCISSORS) {
        cout << "You Win! Rock smashes Scissors." << endl;
    } else if (uChoice == PAPER && cChoice == ROCK) {
        cout << "You Win! Paper wraps Rock." << endl;
    } else if (uChoice == SCISSORS && cChoice == PAPER) {
        cout << "You Win! Scissors cut Paper." << endl;
    } else {
        cout << "Tie. Play again to win the Game." << endl;
    }
}

int main() {
    
    srand(time(0));
    char uChoice;
    char cChoice;

    uChoice = getUserOption();
    cout << "Your choice is: ";
    showSelectedOption(uChoice);

    cChoice = getComputerOption();
    cout << "Computer's choice is: ";
    showSelectedOption(cChoice);

    chooseWinner(uChoice, cChoice);

    return 0;
}

