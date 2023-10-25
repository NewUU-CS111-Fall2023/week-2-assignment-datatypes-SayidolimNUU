/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 25.10.2023
 */

#include <iostream>

using std::cin, std::cout, std::string, std::endl;

bool task4(string sentence, string word) {
    sentence = sentence.substr(1, sentence.size() - 1);
    string tempWord = "";
    int count = -1, size = sentence.size() - 1;
    for (int i = 0; i < sentence.size(); ++i) {
        while (((sentence[i] == ' ') && (i + count < size)) || i == 0) {
            ++count;
            if (i == 0) {
                if (sentence[i + count] == word[count]) {
                    tempWord += sentence[i + count];
                    if (tempWord == word) {
                        return true;
                    }
                } else {
                    i += count;
                    break;
                }
            } else {
                if (sentence[i + count] == word[count - 1]) {
                    tempWord += sentence[i + count];
                    if (tempWord == word) {
                        return true;
                    }
                } else {
                    i += count;
                    break;
                }
            }
        }
        tempWord = "";
        count = 0;
    }
    return false;
}
