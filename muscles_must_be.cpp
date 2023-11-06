#include <iostream>

int main()
{
    int hight;
    int age;
    int weight;
    int calories;
    std::cout << "Input hight: ";
    std::cin >> hight;
    std::cout << "Input age: ";
    std::cin >> age;
    std::cout << "Input weight: ";
    std::cin >> weight;
    calories = (10 * weight) + (6, 25 * hight )- (5 * age) + 5;
    std::cout <<"You should eat " << calories<<" calories";
}
