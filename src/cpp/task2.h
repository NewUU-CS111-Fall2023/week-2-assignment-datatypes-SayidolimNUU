/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 25.10.2023
 */

#include <iostream>
#include <time.h>

using std::cin, std::cout, std::string, std::endl;

void task2() {
    srand(time(0));
    int input = 0, randomNumber = rand() % 99 + 1;
    cout << "Guess my random from 1 to 100" << endl;
    while (input != randomNumber) {
        cin >> input;
        if (input > randomNumber) {
            cout << "too high" << endl;
        }
        else if (input < randomNumber) {
            cout << "too low" << endl;
        }
        else {
            cout << "game over" << endl;
        }
    }
}
