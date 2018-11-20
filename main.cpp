#include <iostream>
#include <string>

using namespace std;

/**
 * Lists the functions a user may input.
 */
void options() {
    cout << "+ = Addition\n- = Subtraction.\n* = Multiplication.\nC = Exit (or Ctrl + C)." << endl;
}

/**
 * Clear string.
 */
void clear() {
    cout << string( 100, '\n');
}

int main() {
    char operation;
    bool exit = false;

    do {
        options();
        cout << "Enter operation: " << endl;
        cin >> operation;

        int num1, num2;

        if (operation != 'C') {
            clear();
            cout << "Enter first number:" << endl;
            cin >> num1;
            cout << "Enter second number: " << endl;
            cin >> num2;
        }

        switch (operation) {
            case '+': { //Addition block.
                cout << "Result: " << num1 + num2;
                break;
            }

            case '-': { //Subtraction block.
                cout << "Result: " << num1 - num2 << endl;
                break;
            }

            case '*': { //Multiplication block.
                cout << "Result: " << num1 * num2 << endl;
                break;
            }

            default:break;
        }

        if (operation == 'C') {
            exit = true;
        }
    } while (!exit);

    return 0;
}