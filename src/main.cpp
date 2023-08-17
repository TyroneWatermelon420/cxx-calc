#include<iostream>
#include"lib/print.hpp"

using namespace std;

double number1;
double number2;

char operation;

int main(){
    cout << "********************************************\n\n\nWelcome to the simple calculator!\nEnter the operation you want to use +,-,*,/\n-->  ";
    cin >> operation;
    cout << endl << endl;
    cout << "Enter two numbers for your calculation\nFirst number\n-->  ";
    cin >> number1;
    cout << "Second number\n-->  ";
    cin >> number2;

    switch (operation) {
        case'+':
            cout << number1 << "+" << number2 << " is ";
            cout << number1 + number2 << endl;
            break;
        case'-':
            cout << number1 << "-" << number2 << " is ";
            cout << number1 - number2 << endl;
            break;
        case'*':
            cout << number1 << "*" << number2 << " is ";
            cout << number1 * number2 << endl;
            break;
        case'/':
            cout << number1 << "/" << number2 << " is ";
            cout << number1 / number2 << endl;
        break;
    }
}
