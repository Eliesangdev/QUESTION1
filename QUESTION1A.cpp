#include <iostream>
using namespace std;

bool is_leap_year(unsigned int Y) {
    // If Y is a century year, it's a leap year only if divisible by 400
    if (Y % 100 == 0) {
        return Y % 400 == 0;
    }
    // Otherwise, Y is a leap year if divisible by 4
    else {
        return Y % 4 == 0;
    }
}

int main() {
    
    std::cout << std::boolalpha;  // Print bool values as true/false according to our condition above.
    std::cout << "Is 2000 a leap year? " << is_leap_year(2000) << std::endl;  
    std::cout << "Is 1900 a leap year? " << is_leap_year(1900) << std::endl;  
    std::cout << "Is 2020 a leap year? " << is_leap_year(2020) << std::endl;  
    std::cout << "Is 2021 a leap year? " << is_leap_year(2021) << std::endl;  

    return 0;
}

