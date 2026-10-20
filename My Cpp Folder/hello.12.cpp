#include <iostream>
#include <vector>
#include <algorithm>
#include <string_view>

// Use a fast I/O setup for high-performance applications
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

int main() {
    fast_io();

    // Using modern containers and auto type deduction
    std::vector<int> numbers = {5, 2, 8, 1, 9};

    // Sort the vector using standard algorithms
    std::sort(numbers.begin(), numbers.end());

    // Range-based for loop (C++11)
    std::cout << "Sorted numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
