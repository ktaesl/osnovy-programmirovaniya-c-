#include <iostream>
#include <string>

int main() {  
//   Task 1
  int bilets;
  std::string customers;
  double price = 2500; 
  const double sale = 0.10;
  bool is_sale;

  std::cout << "Write your name: ";
  getline(std::cin, customers);

  std::cout << "Write number of tickets: ";
  std::cin >> bilets;

  std::cout << "Do you have sale? (1/0)";
  std::cin >> is_sale;

  if (bilets < 1 && bilets > 10) {
    std::cout << "The number of tickets is less than 1 or more than 10";
  }

  if (is_sale == 1) {
    std::cout << "Your cost is:" << (bilets * price) * 0.10; 
  } else if (is_sale == 0){
    std::cout << "Your cost is:" << bilets * price;
  } else {
    std::cout << "Wrong type";
  }
  return 0;
}