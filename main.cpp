// Copyright (c) 2021 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Oct 2021
// This is a guessing game

#include <iostream>

int main() {
    // This function inputs guess and outputs if correct or not

    // define variables
    const int NUM = 4;
    int guess;

    // input
    std::cout << "Enter guess(0-9): " << std::endl;
    std::cin >> guess;

    // process/output
    if (guess == NUM) {
        std::cout << "You guessed correct!" << std::endl;
    } else if (guess < 0 || guess > 9) {
        std::cout << "Please guess from 0-9" << std::endl;
    } else {
        std::cout << "You guessed incorrectly :(" << std::endl;
    }

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
