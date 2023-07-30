#include<iostream>
#include<cmath>

double number1;
double number2;

char operation;

int main(){
    std::cout << "********************************************\n\n\nWelcome to the simple calculator!\nEnter the operation you want to use +,-,*,/\n-->  ";
    std::cin >> operation;
    std::cout << std::endl << std::endl;
    std::cout << "Enter two numbers for your calculation\nFirst number\n-->  ";
    std::cin >> number1;
    std::cout << "Second number\n-->  ";
    std::cin >> number2;

    switch (operation) {
        case'+':
            std::cout << number1 << "+" << number2 << " is ";
            std::cout << number1 + number2 << std::endl;
            break;
    }
}
