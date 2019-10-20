// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: October 2019
// This program lets user to see if he can marry the grandmother's daughter

#include <iostream>
#include <string>

int main() {
    // This function lets user to see if he can marry the grandmother's daughter
    std::string age;
    int ageCheck;

    // input
    std::cout << "Enter your Age: ";
    std::cin >> age;
    std::cout << "" << std::endl;

    // process & output
    try {
        ageCheck = std::stoi(age);
        if (ageCheck > 25 && ageCheck < 40) {
            std::cout << "You can marry the grandmother’s grandchild ";
        } else {
            std::cout << "You can't marry the grandmother’s grandchild ";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Age";
    }
}
