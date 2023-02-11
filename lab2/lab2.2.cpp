#include <iostream>

int main()
{
    int n;
    std::cout << "Input product code: ";
    std::cin >> n;
    switch (n) {
    case 1:
        std::cout << "Potato";
        break;
    case 2:
        std::cout << "Cucumber";
        break;
    case 3:
        std::cout << "Apple";
        break;
    case 4:
        std::cout << "Melon";
        break;
    case 5:
        std::cout << "Lettuce";
        break;
    default:
        std::cout << "Invalid input";
        break;
    }
    return 0;
}