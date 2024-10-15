#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Remove the third element (index 2)
    numbers.erase(numbers.begin() + 2);

    // Print the updated vector
    std::cout << "Vector after removal: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
