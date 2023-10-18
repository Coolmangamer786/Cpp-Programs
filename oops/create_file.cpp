#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("test.txt");

  // Write to the file
  MyFile << "Hello you are learning how to write to a file in C++\n";

  // Close the file
  MyFile.close();
} 