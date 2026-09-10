#include <iostream>
#include <vector>

int main() {
    std::vector<int> v1 { 10, 20, 30, 40 };

    for (std::vector<int>::iterator pos = v1.begin(); pos != v1.end(); ++pos) {
        std::cout << *pos << std::endl;
    }

    for (auto pos = v1.cbegin(); pos != v1.cend(); ++pos) {
        // can't do *pos = 100; // error: assignment of read-only location
        std::cout << *pos << std::endl;
    }

    // Using range-based for loop. Internally its equivalent to the above loop, but more readable and concise.
    for (const auto& element : v1) {
        std::cout << element << std::endl;
    }

    for (auto pos = v1.rbegin(); pos != v1.rend(); ++pos) {
        std::cout << *pos << std::endl;
    }
    return 0;
}