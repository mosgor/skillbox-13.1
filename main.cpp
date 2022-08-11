#include <iostream>
#include <vector>

int main() {
    std::cout << "Input vector size: ";
    int size;
    std::cin >> size;
    std::vector<int> numbers(size);
    std::cout << "Input numbers: ";
    for (int i = 0; i < numbers.size(); ++i) std::cin >> numbers[i];
    std::cout << "Input number to delete: ";
    int del_num;
    std::cin >> del_num;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == del_num){
            for (int j = i; j < numbers.size() - 1; ++j) {
                std::swap(numbers[j], numbers[j+1]);
            }
            numbers.pop_back();
            i--;
        }
    }
    std::cout << "Result: ";
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    return 0;
}
