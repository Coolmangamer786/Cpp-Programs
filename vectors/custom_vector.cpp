#include <iostream>
#include <vector>
#include <string>

class Student {
public:
    std::string name;
    int age;

    Student(std::string n, int a) : name(n), age(a) {}
};

int main() {
    // Create a vector of Student objects
    std::vector<Student> students;
    students.emplace_back("Alice", 20);
    students.emplace_back("Bob", 22);
    
    // Print the students
    std::cout << "Students in the vector:\n";
    for (const Student& student : students) {
        std::cout << "Name: " << student.name << ", Age: " << student.age << std::endl;
    }

    return 0;
}
