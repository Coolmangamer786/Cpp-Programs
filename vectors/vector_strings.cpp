#include <iostream>
#include <vector>
#include <string>

int main() {
    // Create a vector of strings
    std::vector<std::string> fruits = {"Apple", "Banana", "Cherry"};

    // Add another fruit
    fruits.push_back("Date");

    // Print the fruits
    std::cout << "Fruits in the vector: ";
    for (const std::string& fruit : fruits) {
        std::cout << fruit << " ";
    }
    std::cout << std::endl;

    return 0;
}
