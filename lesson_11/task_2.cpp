#include <iostream>
#include <string> 

int main() {
    // Task 2
    int amount;
    int temprature; 
    int i;
    int average = amount;


    std::cout << "Write amount: ";
    std::cin >> amount;

    if (amount <= 10) {
        for (i = 1; i <= amount; i++) {
            std::cout << "write temprature: ";
            std::cin >> temprature;
            if (0 <= temprature <= 40) {
                std::cout << "Accepted" << std::endl;
            } else if (0 > temprature > 40) {
                std::cout << "Rejected";
            }
        } 
        } else {
            std::cout << "Forbideen amount";
        }
    
    if (amount > 0) {
        std::cout << "Average: " << amount / temprature;
    } else {
        std::cout << "Average: n/a ";
    }
    return 0;
}