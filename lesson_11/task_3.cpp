#include <iostream>
#include <string>

int main() {
    // Task 3
    int budget;
    int price;
    int amount;
    int i;

    std::cout << "Write budget: ";
    std::cin >> budget;

    if (budget < 100000) {
        while (price != 0) {
            for (i = 1; i <= 10; i++) {
                std::cout << "Write price: ";
                std::cin >> price;
                if (0 < price < 100000 ) {
                    if (price < budget) {
                        std::cout << "Added" << std::endl;
                        amount += price;
                        budget -= price;
                        i += 1;
                    } else {
                        std::cout << "Not enough money";
                    }
                } else {
                    std::cout << "Too big price";
                }
            
            }
            break;
        }
    } else {
        std::cout << "Too big budget";
    }
    std::cout << "Items: " << i << std::endl;
    std::cout << "Spent: " << amount << std::endl;
    std::cout << "Remaining: " << budget;

}