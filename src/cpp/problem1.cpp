#include <iostream>

using std::cin, std::cout, std::string, std::endl;

int main() {
    int input;
    cin >> input;
    (input % 400 == 0 || (input % 4 == 0 && input % 100 != 0)) ? cout << "YES" : cout << "NO";
    cout << endl;
}
