#include <iostream>
#include <string>

// Main function - program entry point
int main() {
    std::string name;  // Variable for storing username
    
    // Request user input
    std::cout << "Enter your name: ";
    std::cin >> name;  // Read user input
    
    // Output greeting message
    std::cout << "Hello world from " << name << std::endl;
    
    return 0;  // Program completed successfully
}
