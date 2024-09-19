// uses a for loop to find the factorial of a number
// code by Ryuya Hirota

#include <iostream>

int main() {
    int start;
    std::cout << "Enter number: " << std::endl;
    std::cin >> start;
    
    long long int result = 1; // 0! = 1
    for (int i = start; i > 1; --i) { // start at the biggest number and multiply the result by the number (6 * 5 * 4 * ...)
        result *= i;
    }
    
    std::cout << start << "! = " << result << std::endl;
    
    return 0;
}
