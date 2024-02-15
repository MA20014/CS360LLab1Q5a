#include <iostream>
#include <iomanip>
using std::cout;

int main() {
    // Print strings centered in fields of 20 characters
    cout << std::setw(20) << "Good Morning" << std::setw(20) << "Sarah" << std::setw(20) << "Sunshine!" << std::endl;

    return 0;
}
