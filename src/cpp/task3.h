/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 25.10.2023
 */

#include <iostream>
#include <time.h>

using std::cin, std::cout, std::string, std::endl;

void task3() {
    srand(time(0));
    int digits, number[100], input, result[200], resultIndex = 0;
    //tried to solve 'trash' values problem by increasing the array size of 'result', didn't help

    bool outIndex = 0;

    number[0] = rand() % 9 + 1;     //to avoid leading 0

    for (int i = 0; i < 200; ++i) {
        result[i] = 0;
    }

    cout << "The generated number is:" << endl;
    cout << number[0];

    for (int i = 1; i < 100; ++i) {
        number[i] = rand() % 10;
        cout << number[i];
    }

    cout << endl << "Input your number:" << endl;
    cin >> input;

    for (int i = 0; i < 100; ++i) {
        digits += number[i];
        if (digits / input > 0) {
            result[resultIndex] = digits / input;
            digits = digits % input;
        }
        ++resultIndex;
        digits *= 10;
    }
    digits /= 10;

    cout << "The result is:" << endl;
    for (int i = 0; i < 100; ++i) {
        if (result[i] != 0) {
            outIndex = 1;
        }
        if (outIndex == 1) {
            cout << result[i];
        }
    }
    cout << endl;
    cout << "The remainder is " << digits << endl;
}

