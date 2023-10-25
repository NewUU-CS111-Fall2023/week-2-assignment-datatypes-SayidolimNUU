/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 25.10.2023
 */

#include <iostream>
#include <string>
#include <time.h>
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"

using std::cin, std::cout, std::string, std::endl;

int main() {
    int taskNumber;
    bool exit = false;
    int task1Year;
    string task4Sentence;
    string task4Word;
    while (exit != 1) {
        cout << "Enter the number of the task (from 1 to 4) you want to check:" << endl;
        cin >> taskNumber;
        switch (taskNumber) {
            case 1:
                cout << "Enter the year:" << endl;
                cin >> task1Year;
                cout << task1(task1Year) << endl;
                break;
            case 2:
                task2();
                break;
            case 3:
                task3();
                /*IMPORTANT: sometimes the result starts with several 'trash'
                digits. However, every time I used 'debugger' to try to find the issue, it worked
                perfectly. Therefore, I couldn't find the cause of this problem */
                break;
            case 4:
                cout << "Enter your sentence. End it with dot (.): ";
                std::getline(cin, task4Sentence, '.');
                cout << "Enter your word:" << endl;
                cin >> task4Word;
                task4(task4Sentence, task4Word) ? cout << "There is a match" : cout << "There is NOT a match";
                cout << endl;
                break;
            default:
                cout << "Wrong input. Make sure the number is between 1 and 4" << endl;
        }
        cout << endl << "If you want to stop checking, enter 1. Otherwise, enter 0:\n" << endl;
        cin >> exit;
    }
    return 0;
}
