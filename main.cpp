#include <iostream>
#include <cstring>

using namespace std;
#include "Calculation.h"

void printDescription(void);
int main()
{
    Calculation calculator;
    printDescription();

    while(true) {

        cout << "Enter a sum:" << endl;
        int firstNumber;
        cin >> firstNumber;

        if(firstNumber == 0) {
            break;
        }

        char method;
        cin >> method;

        int secondNumber;
        cin >> secondNumber;

        int result;
        switch(method) {
            case '+' :
                result = calculator.plusCalc(firstNumber, secondNumber);
                break;
            case '-' :
                result = calculator.minusCalc(firstNumber, secondNumber);
                break;
            case 'x':
                result = calculator.multiplyCalc(firstNumber, secondNumber);
                break;
            case '/' :
                result = calculator.divideCalc(firstNumber, secondNumber);
                break;
            default :
                cout << "\nMethod not known.\n";
                continue;
                break;
        }

        cout << "Result: " << result << "\n" << endl;
    }

    return 0;
}

void printDescription(void) {
    cout << "This is an console calculator. \n"
    << "You can give me an sum and i calculate it for you.\n"
    << "You can use the follow methods of calculation: \n"
    << "+, -, x, /\n"
    << "Enter zero (0) to quit.\n"<< endl;
}
