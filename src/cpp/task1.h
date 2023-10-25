/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 25.10.2023
 */

using std::cin, std::cout, std::string, std::endl;

string task1(int input) {
    return (input % 400 == 0 || (input % 4 == 0 && input % 100 != 0)) ? "It is a leap year"
    : "It is NOT a leap year";
}
