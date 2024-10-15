#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Print the elements
    std::cout << "Vector elements: ";
    for (int num : numbers) { //can use &num for passing referance not copy
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
